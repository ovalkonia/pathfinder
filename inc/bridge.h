#ifndef BRIDGE_H
#define BRIDGE_H

// Bridge

typedef struct s_bridge {
    int length;
    struct s_island *island;
    struct s_bridge *next;
} t_bridge;

t_bridge *bridge_new(int length, struct s_island *island);
t_bridge *bridge_push_front(t_bridge **bridges, int length, struct s_island *island);
t_bridge *bridge_push_back(t_bridge **bridges, int length, struct s_island *island);
t_bridge *bridge_find_by(const t_bridge *bridges, bool (*cmp)(const t_bridge *, void *), void *arg);
void bridge_destroy(t_bridge **bridge);
void bridge_destroy_all(t_bridge **bridges);
void bridge_pop_front(t_bridge **bridges);
void bridge_pop_back(t_bridge **bridges);

// find functions

bool bridge_by_island(const t_bridge *bridge, void *island);

#endif

