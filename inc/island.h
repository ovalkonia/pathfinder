#ifndef ISLAND_H
#define ISLAND_H

// Island

typedef struct s_island {
    char *title;
    t_bridge *bridges;
    struct s_island *next;
} t_island;

t_island *island_new(const char *title);
t_island *island_push_front(t_island **islands, const char *title);
t_island *island_push_back(t_island **islands, const char *title);
t_island *island_find_by(const t_island *islands, bool (*cmp)(const t_island *, void *), void *arg);
void island_destroy(t_island **island);
void island_destroy_all(t_island **islands);
void island_pop_front(t_island **islands);
void island_pop_back(t_island **islands);
bool island_title_valid(const char *title);
void island_print_paths(t_island *islands, t_island *island);
void island_print_paths_all(t_island *islands);

// find functions

bool island_by_title(const t_island *island, void *title);

#endif

