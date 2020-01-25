/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_unsigned.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/20 01:22:37 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/20 17:00:13 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf_unsigned(t_printf *format, unsigned int arg)
{
	unsigned int	len;
	int				rlen;
	int				spaces;
	int				zeroes;

	rlen = 2;
	len = ft_count_length_unsigned(*format, arg);
	spaces = ft_count_spaces(format, len, 0);
	zeroes = ft_count_zeroes(format, len, 0);
	rlen = ft_printf_unsigned2(format, arg, spaces, zeroes) + len;
	return (rlen);
}

int		ft_printf_unsigned2(t_printf *format, int arg, int spaces, int zeroes)
{
	int rlen;

	rlen = 0;
	if (format->flag_minus == TRUE)
	{
		rlen += ft_write_zeroes(zeroes);
		ft_putnbr_check_unsigned(*format, arg);
		rlen += ft_write_spaces(spaces);
	}
	else if (format->precision_check == TRUE || format->flag_zero == FALSE)
	{
		rlen += ft_write_spaces(spaces);
		rlen += ft_write_zeroes(zeroes);
		ft_putnbr_check_unsigned(*format, arg);
	}
	else if (format->precision_check == FALSE)
	{
		rlen += ft_write_zeroes(spaces);
		ft_putnbr_check_unsigned(*format, arg);
	}
	return (rlen);
}
