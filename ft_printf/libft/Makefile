# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 14:58:27 by jrameau           #+#    #+#              #
#    Updated: 2023/09/27 17:24:30 by mnaschbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra
SRCS		= ft_striteri.c ft_strjoin.c ft_strnstr.c ft_strlcpy.c ft_strmapi.c  ft_split.c ft_strtrim.c ft_substr.c ft_putstr_fd.c ft_putendl_fd.c\
			ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_strlen.c ft_strncmp.c ft_strrchr.c  \
			ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	        ft_memmove.c ft_memset.c ft_putchar_fd.c  ft_putnbr_fd.c \
	        ft_strchr.c ft_strdup.c ft_strlcat.c \
			ft_tolower.c ft_toupper.c \

	        
OBJ		= $(SRCS:%.c=%.o)
CC		= cc

all: $(NAME)

# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compile source files into object files
$(OBJ): %.o : %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
