# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nben-ezr <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/04 22:57:56 by nben-ezr       #+#    #+#                 #
#    Updated: 2020/03/01 22:24:06 by nben-ezr      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

VPATH = src

SRC =	ft_atoi.c			\
		ft_putstr.c			\
		ft_itoa_base.c		\
		ft_utoa_base.c		\
		ft_ultoa_base.c		\
		ft_putnbr.c			\
		ft_putnbr_unsigned.c\
		ft_chrsearch.c		\
		ft_chrcount.c		\
		ft_bzero.c			\
		ft_isalnum.c		\
		ft_isalpha.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_isprint.c		\
		ft_isspace.c		\
		ft_putchar.c		\
		ft_strcat.c			\
		ft_strlcat.c		\
		ft_strcmp.c			\
		ft_memccpy.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_memcpy.c			\
		ft_memmove.c		\
		ft_memset.c			\
		ft_strchr.c			\
		ft_strlcat.c		\
		ft_strlen.c			\
		ft_strncmp.c		\
		ft_strnstr.c		\
		ft_strrchr.c		\
		ft_tolower.c		\
		ft_toupper.c		\
		ft_strlcpy.c		\
		ft_calloc.c			\
		ft_strdup.c			\
		ft_strndup.c		\
		ft_substr.c			\
		ft_strjoin.c		\
		ft_strtrim.c		\
		ft_split.c			\
		ft_lstnew.c 		\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstadd_back.c	\
		ft_lstdelone.c		\
		ft_lstclear.c		\
		ft_lstiter.c		\
		ft_lstmap.c

OBJS = $(SRC:.c=.o)

INCLUDES = include/libft.h

CFLAGS = -Wall -Werror -Wextra -I $(INCLUDES)

all: $(NAME)

%.o: %.c
	gcc -c $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)
	ranlib $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS)

lib: all clean

re: fclean all
