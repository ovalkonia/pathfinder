#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {
    if (head == NULL || *head == NULL) {
        return;
    };

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }

    t_list *penultimate = *head;
    while (penultimate->next->next != NULL) {
        penultimate = penultimate->next;
    }

    free(penultimate->next);
    penultimate->next = NULL;
}

