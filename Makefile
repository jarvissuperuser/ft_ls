# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/11 13:22:48 by tmugadza          #+#    #+#              #
#    Updated: 2016/06/19 17:00:26 by tmugadza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NM = ft_ls

F = -Werror -Wextra -Wall -o

SRC = ft_ls.c\
	  main.c

OB = main.o\
	 ft_ls.o

L = libft/

all : $(NM) 

$(NM) : $(OB) 

fin: first
	$(CC) $(F) $(NM) $(OB) -I ./$(L) -L -lft
first:
	make -C $(L)
	$(CC) -c $(SRC) -I ./$(L) -L -lft
clean : 
	/bin/rm $(OB)

fclean : 
	/bin/rm $(NM) $(OB)

re : clean fclean all
