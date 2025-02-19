#ifndef LIBMX_H
#define LIBMX_H

#include <stddef.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>

// Macros

#define MX_MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MX_MAX(a, b) (((a) > (b)) ? (a) : (b))

// Utils

void mx_printchar(char c);
void mx_print_unicode(wchar_t c);
void mx_printstr(const char *s);
void mx_printerr(const char *s);
void mx_print_strarr(char **arr, const char *delim);
bool mx_isspace(char c);
bool mx_isupper(char c);
bool mx_islower(char c);
bool mx_isalpha(char c);
bool mx_isdigit(char c);
bool mx_isxdigit(char c);
char mx_toupper(char c);
char mx_tolower(char c);
void mx_printint(int n);
double mx_pow(double n, unsigned int pow);
int mx_sqrt(int x);
char *mx_nbr_to_hex(unsigned long nbr);
unsigned long mx_hex_to_nbr(const char *hex);
char *mx_itoa(int number);
int mx_atoi_ruthless(const char *str);
void mx_foreach(int *arr, int size, void (*f)(int));
int mx_binary_search(char **arr, int size, const char *s, int *count);
int mx_bubble_sort(char **arr, int size);
int mx_quicksort(char **arr, int left, int right);

// String

int mx_strlen(const char *s);
int mx_strnlen(const char *s, int maxlen);
void mx_swap_char(char *s1, char *s2);
void mx_str_reverse(char *s);
void mx_strdel(char **str);
void mx_del_strarr(char ***arr);
int mx_get_char_index(const char *str, char c);
int mx_strspn(const char *str, const char *accept);
int mx_strcspn(const char *str, const char *reject);
char *mx_strtok(char *restrict str, const char *restrict delim);
char *mx_strdup(const char *s1);
char *mx_strndup(const char *s1, size_t n);
char *mx_strcpy(char *dst, const char *src);
char *mx_stpcpy(char *dst, const char *src);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_stpncpy(char *dst, const char *src, int len);
int mx_strcmp(const char *s1, const char *s2);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strcat(char *restrict s1, const char *restrict s2);
char *mx_strchr(const char *s, int c);
char *mx_strrchr(const char *s, int c);
char *mx_strchrnul(const char *s, int c);
char *mx_strstr(const char *haystack, const char *needle);
int mx_get_substr_index(const char *str, const char *sub);
int mx_count_substr(const char *str, const char *sub);
int mx_count_words(const char *str, char c);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);
char *mx_del_extra_spaces(const char *str);
char **mx_strsplit(const char *s, char c);
char *mx_strjoin(const char *s1, const char *s2);
char *mx_file_to_str(const char *file);
char *mx_replace_substr(const char *str, const char *sub, const char *replace);
int mx_read_line(char *lineptr, char delim, const int fd);

// Memory

void *mx_memset(void *b, int c, size_t len);
void *mx_mempcpy(void *restrict dst, const void *restrict src, size_t n);
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *mx_memrcpy(void *restrict dst, const void *restrict src, size_t n);
void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
int mx_memcmp(const void *s1, const void *s2, size_t n);
int mx_rawmemcmp(const void *s1, const void *s2);
void *mx_memchr(const void *s, int c, size_t n);
void *mx_memrchr(const void *s, int c, size_t n);
void *mx_rawmemchr(const void *s, int c);
void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);
void *mx_memmove(void *dst, const void *src, size_t len);
void *mx_realloc(void *ptr, size_t size);

// List

typedef struct s_list {
    void *data;
    struct s_list *next;
} t_list;

t_list *mx_create_node(void *data);
void mx_push_front(t_list **list, void *data);
void mx_push_back(t_list **list, void *data);
void mx_pop_front(t_list **head);
void mx_pop_back(t_list **head);
int mx_list_size(t_list *list);
t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *));

#endif

