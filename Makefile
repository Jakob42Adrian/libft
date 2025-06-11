# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jakobadrian <jakobadrian@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/09 18:00:00 by jadrian           #+#    #+#              #
#    Updated: 2025/06/11 03:13:05 by jakobadrian      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strlen.c ft_strlcpy.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_strlcat.c ft_strrchr.c ft_strncmp.c \
	ft_strchr.c ft_strnstr.c ft_memset.c ft_memcpy.c ft_memmove.c \
	ft_strnstr.c ft_toupper.c ft_tolower.c 

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

