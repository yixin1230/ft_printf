# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/27 10:41:38 by yizhang       #+#    #+#                  #
#    Updated: 2022/11/17 20:11:36 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
LIBFT = libft.a
SRCS = ft_printf.c ft_utils.c
OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS} 
	make -C libft
	cp libft/${LIBFT} ${NAME}
	ar rcs ${NAME} ${OBJS}

${OBJS}: ${SRCS}
	${CC} ${FLAGS} -c ${SRCS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re:fclean all