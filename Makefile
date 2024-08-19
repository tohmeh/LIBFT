# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Ilib
SRC_DIR = src
OBJ_DIR = obj
LIB_DIR = lib
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
LIB_NAME = libft.a

# Rules
all: $(LIB_NAME)

$(LIB_NAME): $(OBJS)
	ar rcs $(LIB_DIR)/$(LIB_NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(LIB_DIR)/$(LIB_NAME)

re: fclean all

.PHONY: all clean fclean re
