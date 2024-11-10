#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
    if (lst == NULL || cmp == NULL) {
        return NULL;
    }

    t_list *i = lst;
    while (i->next != NULL) {
        t_list *min = i;
        t_list *j = min->next;
        while (j != NULL) {
            if (cmp(min->data, j->data)) {
                min = j;
            }

            j = j->next;
        }

        if (min != i) {
            void *temp = min->data;
            min->data = i->data;
            i->data = temp;
        }

        i = i->next;
    }

    return lst;
}

