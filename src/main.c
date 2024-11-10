#include "../inc/pathfinder.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        print_error(USAGE, NULL);
        exit(-1);
    }

    // All the action
    int fd = file_open(argv[1]);
    int islands_num = file_parse_first_line(fd, argv[1]);
    t_island *islands = file_parse_islands(fd, islands_num); // Closes fd automatically
    island_print_paths_all(islands);

    // Exit
    island_destroy_all(&islands);

    return 0;
}

