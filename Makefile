CC := clang
CFLAGS := -std=c11 -Wall -Wextra -Werror -Wpedantic

PATHFINDER := pathfinder
OBJ_DIR := obj
SRC_DIR := src

.PHONY: all
all: $(PATHFINDER)

.PHONY: clean
clean:
	make -C libmx clean
	rm -rf $(OBJ_DIR)

.PHONY: uninstall
uninstall: clean
	make -C libmx uninstall
	rm -f $(PATHFINDER)

.PHONY: reinstall
reinstall: uninstall all

$(OBJ_DIR):
	mkdir -p $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(PATHFINDER): $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(wildcard $(SRC_DIR)/*.c))
	make -C libmx libmx.a
	$(CC) $(CFLAGS) -o $@ $^ libmx/libmx.a

