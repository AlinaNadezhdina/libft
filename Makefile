# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wcollen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/16 18:32:08 by wcollen           #+#    #+#              #
#    Updated: 2021/10/20 18:05:33 by wcollen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c\
			ft_isascii.c	ft_isprint.c	ft_strlen.c\
			ft_memset.c		ft_bzero.c		ft_memcpy.c\
			ft_memmove.c	ft_strlcpy.c	ft_memmove.c\
			ft_strlcpy.c	ft_strlcat.c	ft_toupper.c\
			ft_tolower.c	ft_strchr.c		ft_strrchr.c\
			ft_strncmp.c	ft_memchr.c		ft_memcmp.c\
			ft_strnstr.c	ft_atoi.c		ft_calloc.c\
			ft_strdup.c

HEADER	=	libft.h

OBJ		=	$(patsubst %.c, %.o, $(SRCS))

CC		=	gcc

RM		=	rm -f

CFLAGS	=	-Wall -Werror -Wextra -I$(HEADER)

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER) 
	ar rcs $(NAME) $?

%.o		:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	${RM} $(OBJ)

fclean	:	clean
	$(RM) $(NAME)

re		: fclean all
