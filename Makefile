# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 13:20:05 by guvascon          #+#    #+#              #
#    Updated: 2024/11/27 16:12:49 by guvascon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_print.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_base.Created

OBJS = $(SRCS: .c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

Name = ft_printf.a

all : $(NAME)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(OBJS)

re: fclean $(NAME)

.PHONY: all clean fclean re