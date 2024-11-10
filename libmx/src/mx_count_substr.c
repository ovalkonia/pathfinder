#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    if (str == NULL || sub == NULL) {
        return -1;
    }

    int sub_len = mx_strlen(sub);
    if (!sub_len) {
        return 0;
    }

    int count = 0;

    while ((str = mx_strstr(str, sub)) != NULL) {
        ++count;
        str += sub_len;
    }

    return count;
}

