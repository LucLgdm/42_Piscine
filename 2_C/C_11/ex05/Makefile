# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/08 16:17:30 by marvin            #+#    #+#              #
#    Updated: 2024/08/08 16:17:30 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = main
SRCSDIR = source
OBJSDIR = object
SRCS = $(SRCSDIR)/main.c $(SRCSDIR)/file1.c \
		$(SRCSDIR)/file2.c
OBJS = $(SRCS:$(SRCSDIR)/%.c=$(OBJSDIR)/%.o)
INCLUDE = include/
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3

$(OBJSDIR)/%.o: $(SRCSDIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDE)

$(TARGET): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)
	@echo "Creation de l'executable : $(TARGET)"

all: $(TARGET)

clean:
	rm -rf $(OBJSDIR)
	@echo "Suppression du dossier : $(OBJSDIR)"

fclean: clean
	rm -f $(TARGET)
	@echo "Suppression de l'executable : $(TARGET)"

re: fclean all
