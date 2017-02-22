# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdrouet <cdrouet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/22 09:28:04 by cdrouet           #+#    #+#              #
#    Updated: 2017/02/22 10:10:18 by cdrouet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Grace
CC=clang
FLAG= -Wall -Wextra -Werror
SRC_PATH=./
SRC_NAME= Grace.c
OBJ_NAME=$(SRC_NAME:.c=.o)
OBJ_PATH=./
OBJ= $(addprefix $(OBJ_PATH), $(OBJ_NAME))
SRC= $(addprefix $(SRC_PATH), $(SRC_NAME))


$(NAME): $(OBJ)
	@$(CC) $(FLAG) -o $(NAME) $(OBJ)

all: $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@$(CC) $(FLAG) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

diff: re
	@./$(NAME)
	@echo "<----- DIFF GRACE ----->"
	diff $(NAME)_kid.c $(SRC)
	@echo "<-----  END DIFF  ----->"
	@rm $(NAME)_kid.c
	@make fclean
