# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/27 10:41:38 by yizhang       #+#    #+#                  #
#    Updated: 2022/10/27 13:56:49 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRCS = ft_printf.c ft_putchar.c ft_putstr.c
OBJS = ${SRCS:.c = .o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${OBJS}

${OBJS}: ${SRCS}
	${CC} ${FLAGS} ${SRCS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re:fclean all