# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 10:56:17 by yabrodri          #+#    #+#              #
#    Updated: 2023/10/09 17:44:40 by yabrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SOURCES	= ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strncmp.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_atoi.c \
		  ft_strnstr.c \
		  ft_memchr.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_memcmp.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_strmapi.c \
		  ft_striteri.c \

OBJECTS = ${SOURCES:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

AR = ar rcs

HEADER = libft.h

all	: $(NAME)

$(NAME) : $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

%.o	: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	$(RM) $(OBJECTS)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re
