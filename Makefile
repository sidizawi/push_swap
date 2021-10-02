# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szawi <szawi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 17:22:23 by szawi             #+#    #+#              #
#    Updated: 2021/09/10 22:21:02 by szawi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

SRCS =	ft_push_swap.c src/ft_atoi.c src/ft_push.c src/ft_reverse_rotate.c \
		src/ft_rotate.c src/ft_sort.c src/ft_stacks.c src/ft_swap.c \
		src/ft_utils.c src/ft_utils2.c

OBJS = $(SRCS:.c=.o)

EXECUTABLE = push_swap

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CFLAGS) -I include -c $^ -o $@

all :	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXECUTABLE)

clean :
	$(RM) $(OBJS)

fclean :	clean
	$(RM) $(EXECUTABLE)

re : fclean all

.PHONY : all clean fclean re
