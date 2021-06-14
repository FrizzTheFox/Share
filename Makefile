# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile2                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/02 16:09:25 by jahmimid          #+#    #+#              #
#    Updated: 2021/06/14 14:00:42 by jahmimid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcmp.c  ft_memset.c  ft_strlcat.c	ft_strncmp.c ft_tolower.c ft_calloc.c  ft_isascii.c ft_memccpy.c ft_memcpy.c	ft_strchr.c  ft_strlcpy.c ft_strnstr.c ft_toupper.c ft_atoi.c    ft_isalnum.c 	ft_isdigit.c ft_memchr.c  ft_memmove.c ft_strdup.c  ft_strlen.c  ft_strrchr.c ft_putchar_fd.c ft_substr.c  ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

RM	= rm -f

.c.o:
		gcc -Wall -Werror -Wextra -c $< -o ${<:.c=.o}

all:	${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
