# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbahus <jbahus@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/02 14:04:17 by jbahus            #+#    #+#              #
#    Updated: 2015/05/03 22:27:08 by jbahus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = arkanoid

SRC = arkanoid.c ft_error.c physics.c ball.c draw_form.c the_bar.c
SRC += score.c zero_to_five.c five_to_nine.c check_win.c

OBJ = $(SRC:.c=.o)

LIBFT = ./libft/libft.a

GLFW = ./glfw/src/libglfw3.a

LIBRARY = $(LIBFT) $(GLFW)

FRAM = -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo

GCC = gcc -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@git submodule init
	@git submodule update
	@cd glfw; CMake CMakeLists.txt; cd src; $(MAKE) -f Makefile
	@cd libft; $(MAKE) -f Makefile
	@$(GCC) -c $(SRC)
	@$(GCC) $(FRAM) -o $(NAME) $(OBJ) $(LIBRARY)
	@echo "[=================]"
	@echo "|     succes !    |"
	@echo "|     arkanoid    |"
	@echo "|   was summoned  |"
	@echo "[=================]"

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
