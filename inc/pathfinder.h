#ifndef PATHFINDER_H
#define PATHFINDER_H

#include <limits.h>

#include "../libmx/inc/libmx.h"
#include "./error.h"
#include "./bridge.h"
#include "./island.h"
#include "./parent.h"
#include "./dijkstra.h"

// Pathfinder

int file_open(const char *filename);
int file_parse_first_line(int fd, const char *filename);
t_island *file_parse_islands(int fd, int islands_num); // Closes fd automatically

#endif

