# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdrouet <cdrouet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/22 09:28:04 by cdrouet           #+#    #+#              #
#    Updated: 2017/02/22 10:12:30 by cdrouet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Sully
CC=clang
FLAG= -Wall -Wextra -Werror
SRC_PATH=./
SRC_NAME= Sully.c
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
	@make clean
	@echo "<----- DIFF SULLY ----->"
	ls -al | grep Sully | wc -l | grep 13 || echo "bad number of Sully"
	(diff $(SRC_NAME) $(NAME)_0.c) || true
	(diff $(NAME)_3.c $(NAME)_2.c) || true
	@echo "<-----  END DIFF  ----->"
	@rm -f Sully_5.c Sully_4.c Sully_3.c Sully_2.c Sully_1.c Sully_0.c \
		Sully_5 Sully_4 Sully_3 Sully_2 Sully_1
	@make fclean
