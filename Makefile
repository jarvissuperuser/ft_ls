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

all : $(NM) 

$(NM) : $(OB) 

fin: first
	$(CC) $(F) $(NM) $(OB) 
first:
	$(CC) -c $(SRC)
clean : 
	/bin/rm $(OB)

fclean : 
	/bin/rm ft_ls

re : clean fclean all
