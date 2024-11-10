#include "../inc/libmx.h"

int mx_list_size(t_list *list) {
    int len = 0;

    while (list != NULL) {
        ++len;
        list = list->next;
    }

    return len;
}

