# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cassunta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/25 02:37:52 by cassunta          #+#    #+#              #
#    Updated: 2020/09/16 12:30:20 by cassunta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_FLAGC = -Wall -Wextra -l -g

LIB_DIR := libft/

LIB := libft/libft.a

NAME = minishell

SRC = main.c init_environ.c free.c environ.c env_echo.c cd.c cd_1.c \
exec.c other.c retouch_line.c

OBJ := $(SRC:.c=.o)

INCL = minishell.h

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	gcc -o $(NAME) $(OBJ) -L$(LIB_DIR) -lft

$(OBJ): %.o: %.c $(INCL)
	gcc -Wall -Wextra -Werror -g -o $@ -c $<

.FORCE:

$(LIB): .FORCE
	make -C $(LIB_DIR)

clean:
	make clean -C $(LIB_DIR)
	/bin/rm -f $(OBJ)

fclean: clean
	make fclean -C $(LIB_DIR)
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
