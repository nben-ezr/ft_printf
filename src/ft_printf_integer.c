/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_integer_copy2.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/09 22:47:37 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/11 01:09:02 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf_integer(t_printf *format, int arg)
{
	int len;
	int rlen;
	int spaces;
	int	zeroes;

	len = ft_count_length(format, arg);
	spaces = ft_count_spaces(format, len, arg);
	zeroes = ft_count_zeroes(format, len, arg);
	rlen = ft_printf_integer2(format, arg, spaces, zeroes) + len;
	return (rlen);
}

int		ft_printf_integer2(t_printf *format, int arg, int spaces, int zeroes)
{
	int rlen;

	rlen = 0;
	if (format->flag_minus == TRUE)
	{
		arg = ft_printf_integer3(format, arg);
		rlen += ft_write_zeroes(zeroes);
		ft_putnbr_check(format, arg);
		rlen += ft_write_spaces(spaces);
	}
	else if (format->precision_check == TRUE || format->flag_zero == FALSE)
	{
		rlen += ft_write_spaces(spaces);
		arg = ft_printf_integer3(format, arg);
		rlen += ft_write_zeroes(zeroes);
		ft_putnbr_check(format, arg);
	}
	else if (format->precision_check == FALSE)
	{
		arg = ft_printf_integer3(format, arg);
		rlen += ft_write_zeroes(spaces);
		ft_putnbr_check(format, arg);
	}
	return (rlen);
}

int		ft_printf_integer3(t_printf *format, int arg)
{
	if (arg < 0 && (format->precision_check == TRUE || \
					format->flag_zero == TRUE))
	{
		ft_putchar('-');
		arg *= -1;
	}
	return (arg);
}
