# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wyeo <wyeo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/09 14:49:57 by wyeo              #+#    #+#              #
#    Updated: 2015/09/09 14:49:59 by wyeo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = wolf3D
SRC = srcs/computer.c\
	  srcs/controle.c\
	  srcs/draw.c\
	  srcs/main.c\
	  srcs/maps.c\
	  srcs/move.c\
	  srcs/singleton_dir.c\
	  srcs/singleton_plan.c\
	  srcs/singleton_pos.c\
	  srcs/var_init.c
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAG = -L./libft -L./mlx -lft -lmlx -framework OpenGL -framework AppKit

.PHONY: $(NAME) all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/
	@gcc $(OBJ) -o $(NAME) $(CFLAG) -g3
	@echo "\033[33m"Compilation of $(NAME) : "\033[32m"Success"\033[0m"

clean:
	@make clean -C libft/
	@rm -rf $(OBJ)
	@echo "\033[33m"OBJ : "\033[32m"Deleted"\033[0m"

fclean: clean
	@make fclean -C libft/ 
	@rm -rf $(NAME)
	@echo "\033[33m"$(NAME) : "\033[32m"Deleted"\033[0m"

re: fclean $(NAME)
