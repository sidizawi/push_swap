# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szawi <szawi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 23:17:29 by szawi             #+#    #+#              #
#    Updated: 2021/11/09 23:17:29 by szawi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#---------------------------------- Sources -----------------------------------

SRCS = $(wildcard src/*c) ft_push_swap.c
OBJS = $(SRCS:.c=.o)

#--------------------------------- Constants ----------------------------------

NAME = push_swap
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror

#----------------------------------- Rules ------------------------------------

%.o: %.c
	$(CC) $(CFLAGS) -I include -c $^ -o $@

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) -I include $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
