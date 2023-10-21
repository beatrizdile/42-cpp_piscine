# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 22:05:06 by acarneir          #+#    #+#              #
#    Updated: 2023/10/20 16:43:25 by bedos-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CC = c++
FLAGS = -Wall -Wextra -Werror -g3 -std=c++98
VALGRIND = valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

SRC = main.cpp \
		
INCLUDE = Shovel.hpp Worker.hpp Tool.hpp Hammer.hpp Workshop.hpp

OBJ_DIR = build
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.c $(INCLUDE)
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

valgrind: all
	@$(VALGRIND)

v: valgrind