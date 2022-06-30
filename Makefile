# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 10:54:54 by gsimonas          #+#    #+#              #
#    Updated: 2022/06/30 14:56:45 by gsimonas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c ft_putstr.c ft_putnbr.c \
		  ft_putchar.c ft_utoa.c

OBJS	= ${SRCS:.c=.o}

CC		= cc

RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror

AR_RCS	= ar rcs

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR_RCS} ${NAME} ${OBJS}

all:		$(NAME)

clean:
			${RM} ${OBJS}
		
fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all clean fclean re
