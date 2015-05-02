# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbahus <jbahus@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/02 14:04:17 by jbahus            #+#    #+#              #
#    Updated: 2015/05/02 16:30:58 by jbahus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = arkanoid

SRC = ./src/main.c
SRC +=

OBJ = $(SRC:.c=.o)

LIBFT = ./libft/libft.a

GLFW = ./glfw/src/libglfw3.a

LIBRARY = $(LIBFT) $(GLFW)

FRAM = -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo

GCC = gcc -Wall -Werror -Wextra

all: $(NAME)

$(NAME):$(OBJ)
	@git submodule init
	@git submodule update
	@cd glfw; CMake CMakeLists.txt; cd src; $(MAKE) -f Makefile
	@cd libft; $(MAKE) -f Makefile
	@$(GCC) $(FRAM) -o $(NAME) $(OBJ) $(LIBFT) $(GLFW)

clean:
	@rm $(OBJ)

fclean: clean
	@rm $(NAME)

re: fclean all