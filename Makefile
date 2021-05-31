# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/31 15:44:56 by jahmimid          #+#    #+#              #
#    Updated: 2021/05/31 15:55:37 by jahmimid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = ft_memset.c  ft_bzero.c   ft_memcpy.c  ft_memccpy.c ft_memmove.c ft_memchr.c  ft_memcmp.c  \
          ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
          ft_strlen.c  ft_strchr.c  ft_strrchr.c ft_strncmp.c ft_strnstr.c \
          ft_atoi.c   

OBJS    = ${SRCS:.c=.o}

NAME    = libft.a

RM        = rm -f

.c.o:
			gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}

all:        ${NAME}

${NAME}:    ${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:        clean
		${RM} ${NAME}

re:            fclean all

.PHONY:        all clean fclean re
