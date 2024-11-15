# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/14 12:13:29 by tdemarsa          #+#    #+#              #
#    Updated: 2024/07/14 17:23:07 by lde-merc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -c -Wall -Wextra -Werror
HEADER = ft_ft.h

all: final

final: $(HEADER) main.o calcul.o fill_tab.o fill_tab2.o ft_put.o ft_str_malloc.o
	cc -o rush-02 main.o calcul.o fill_tab.o fill_tab2.o ft_put.o ft_str_malloc.o
	chmod +x rush-02

fill_tab.o: fill_tab.c 
	cc $(CFLAGS) fill_tab.c

fill_tab2.o: fill_tab2.c 
	cc $(CFLAGS) fill_tab2.c

ft_put.o: ft_put.c 
	cc $(CFLAGS) ft_put.c

calcul.o: calcul.c 
	cc $(CFLAGS) calcul.c

ft_str_malloc.o: ft_str_malloc.c 
	cc $(CFLAGS) ft_str_malloc.c

main.o: main.c ft_ft.h 
	cc $(CFLAGS) main.c

fclean:
	rm main.o calcul.o fill_tab.o fill_tab2.o ft_put.o ft_str_malloc.o rush-02
