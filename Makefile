# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/27 10:41:38 by yizhang       #+#    #+#                  #
#    Updated: 2022/11/15 11:41:45 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
LIBFT = libft.a
SRCS = ft_printf.c ft_utils.c
OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS} ${LIBFT}
	ar rcs ${OBJS} ${LIBFT}

${OBJS}: ${SRCS}
	${CC} ${FLAGS} -c ${SRCS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re:fclean all