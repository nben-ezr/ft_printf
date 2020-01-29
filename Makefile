# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nben-ezr <nben-ezr@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/12/04 21:28:00 by nben-ezr       #+#    #+#                 #
#    Updated: 2020/01/29 01:04:31 by nben-ezr      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

VPATH = src

SRC = 	ft_printf.c				\
		ft_printf_check.c		\
		ft_printf_char.c		\
		ft_printf_integer.c		\
		ft_printf_address.c		\
		ft_printf_percentage.c	\
		ft_printf_hex.c			\
		ft_printf_string.c		\
		ft_printf_unsigned.c	\
		extra_functions.c		\
		extra_functions2.c		\
		extra_functions3.c		\
		extra_functions4.c		\
		extra_functions5.c

HEADER = includes/ft_printf.h

FLAGS = -Wall -Werror -Wextra -I $(HEADER)

OBJS = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	make lib -C libft -j1
	cp libft/libft.a ./$(NAME)
	ar rcs $(NAME) $?

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS)
	rm -f libft.a

re: fclean all
