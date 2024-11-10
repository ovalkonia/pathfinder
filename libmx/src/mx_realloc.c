#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    if (ptr == NULL) {
        return malloc(size);
    }

    if (!size) {
        free(ptr);
        return NULL;
    }

    size_t ptr_size = malloc_usable_size(ptr);
    if (ptr_size == size) {
        return ptr;
    }

    void *newptr = malloc(size);
    if (newptr != NULL) {
        mx_memcpy(newptr, ptr, MX_MIN(ptr_size, size));
        free(ptr);
    }

    return newptr;
}

