# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdrouet <cdrouet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/22 10:01:42 by cdrouet           #+#    #+#              #
#    Updated: 2017/02/22 10:11:24 by cdrouet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	make -C Collen/
	make -C Grace/
	make -C Sully/

clean:
	make -C Collen/ clean
	make -C Grace/ clean
	make -C Sully/ clean

fclean:
	make -C Collen/ fclean
	make -C Grace/ fclean
	make -C Sully/ fclean

re:
	make -C Collen/ re
	make -C Grace/ re
	make -C Sully/ re

diff:
	@make -C Collen/ diff
	@echo "\n"
	@make -C Grace/ diff
	@echo "\n"
	@make -C Sully/ diff
