# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 11:33:45 by nguinot-          #+#    #+#              #
#    Updated: 2025/10/24 08:50:37 by nguinot-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = \
        src/ft_atoi.c \
        src/ft_bzero.c \
        src/ft_calloc.c \
        src/ft_isalnum.c \
        src/ft_isalpha.c \
        src/ft_isascii.c \
        src/ft_isdigit.c \
        src/ft_isprint.c \
        src/ft_itoa.c \
        src/ft_memchr.c \
        src/ft_memcmp.c \
        src/ft_memcpy.c \
        src/ft_memmove.c \
        src/ft_memset.c \
        src/ft_putchar_fd.c \
        src/ft_putendl_fd.c \
        src/ft_putnbr_fd.c \
        src/ft_putstr_fd.c \
        src/ft_strchr.c \
        src/ft_strdup.c \
        src/ft_striteri.c \
        src/ft_strlcat.c \
        src/ft_strlcpy.c \
        src/ft_strlen.c \
        src/ft_strmapi.c \
        src/ft_strjoin.c \
        src/ft_strncmp.c \
        src/ft_strnstr.c \
        src/ft_strrchr.c \
        src/ft_strtrim.c \
        src/ft_substr.c \
        src/ft_tolower.c \
        src/ft_toupper.c \
        src/ft_split.c 

OBJ = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
INC = -I includes

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

