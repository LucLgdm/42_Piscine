# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/11 15:57:18 by lde-merc          #+#    #+#              #
#    Updated: 2024/07/12 10:34:53 by lde-merc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
OBJFILES = *.o
TARGET = main

all : libft.a
	$(TARGET)

libft.a :
	sh libft_creator.sh

$(TARGET) : $(OBJFILES)
	$(CC) $(FLAGS) -o $(TARGET) $(OBJFILES)

*.o: *.c ft.h
	$(CC) $(FLAGS) -c *.c

clean :
	rm -f $(OBJFILES) 
	rm -f *.a

fclean : clean
	rm -f $(TARGET)

re : fclean
	$(TARGET)
