/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extra_functions2.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/13 23:19:44 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/05 01:54:50 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_count_zeroes(t_printf *format, int len, int arg)
{
	int		zeroes;

	zeroes = 0;
	if (arg < 0)
		len--;
	while (format->precision > len)
	{
		format->precision--;
		zeroes++;
	}
	return (zeroes);
}

int		ft_count_spaces(t_printf *format, int len, int arg)
{
	int		spaces;

	spaces = 0;
	if (arg < 0 && format->precision >= len)
		format->width--;
	arg = 1;
	if (format->precision > len)
		spaces = format->width - format->precision;
	else if (format->precision <= len)
		spaces = format->width - len;
	return (spaces);
}

int		ft_count_spaces_string(t_printf *format, int len)
{
	int		spaces;

	spaces = 0;
	if (format->width > len)
		spaces = format->width - len;
	return (spaces);
}

int		ft_write_zeroes(int zeroes)
{
	int len;

	len = 0;
	while (zeroes > 0)
	{
		ft_putchar('0');
		zeroes--;
		len++;
	}
	return (len);
}

int		ft_write_spaces(int spaces)
{
	int len;

	len = 0;
	while (spaces > 0)
	{
		ft_putchar(' ');
		spaces--;
		len++;
	}
	return (len);
}
