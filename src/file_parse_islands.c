#include "../inc/pathfinder.h"

t_island *file_parse_islands(int fd, int islands_num) {
    char buf[1024];
    int buf_len;
    int line = 2;
    int islands_count = 0;
    bool duplicate = false;
    long lengths_sum = 0;
    t_island *islands = NULL;
    while ((buf_len = mx_read_line(buf, '\n', fd)) != -1) {
        buf[buf_len] = '\0';

        mx_strtok(buf, ",");
        char *length_span = mx_strtok(NULL, "");
        mx_strtok(buf, "-");
        char *src_title_span = buf;
        char *dst_title_span = mx_strtok(NULL, "");

        int length = 0;
        if (length_span != NULL) {
            length = mx_atoi_ruthless(length_span);
        }

        if (dst_title_span == NULL ||
            length <= 0 ||
            !island_title_valid(src_title_span) ||
            !island_title_valid(dst_title_span) ||
            !mx_strcmp(src_title_span, dst_title_span)) {
            print_error(LINE_INVALID, &line);
            close(fd);
            island_destroy_all(&islands);
            exit(-1);
        }

        t_island *island_src = island_find_by(islands, island_by_title, src_title_span);
        t_island *island_dst = island_find_by(islands, island_by_title, dst_title_span);

        if (island_src == NULL) {
            island_src = island_push_back(&islands, src_title_span);
            ++islands_count;
        }

        if (island_dst == NULL) {
            island_dst = island_push_back(&islands, dst_title_span);
            ++islands_count;
        }

        if (bridge_find_by(island_src->bridges, bridge_by_island, island_dst) == NULL) {
            bridge_push_back(&island_src->bridges, length, island_dst);
        } else {
            duplicate = true;
        }

        if (bridge_find_by(island_dst->bridges, bridge_by_island, island_src) == NULL) {
            bridge_push_back(&island_dst->bridges, length, island_src);
        } else {
            duplicate = true;
        }

        lengths_sum += length;
        ++line;
    }

    close(fd);

    if (islands_num != islands_count) {
        print_error(ISLANDS_INVALID, NULL);
        island_destroy_all(&islands);
        exit(-1);
    }

    if (duplicate) {
        print_error(BRIDGES_DUPLICATE, NULL);
        island_destroy_all(&islands);
        exit(-1);
    }

    if (lengths_sum > INT_MAX) {
        print_error(BRIDGES_OVERFLOW, NULL);
        island_destroy_all(&islands);
        exit(-1);
    }

    return islands;
}

