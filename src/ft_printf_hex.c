/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_hex.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/29 02:03:08 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/08 23:29:43 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf_hex(t_printf *format, unsigned int arg)
{
	size_t			len;
	int				rlen;
	int				spaces;
	int				zeroes;
	char			*hex;

	rlen = 0;
	hex = ft_utoa_base(arg, 16);
	len = ft_strlen(hex);
	if (len == 1 && arg == 0 && format->precision == 0 && \
			format->precision_check == TRUE)
	{
		len = 0;
	}
	spaces = ft_count_spaces(format, len, 0);
	zeroes = ft_count_zeroes(format, len, 0);
	if (format->specifier == 'x')
		rlen = ft_printf_hex_lower(format, hex, spaces, zeroes) + len;
	else if (format->specifier == 'X')
		rlen = ft_printf_hex_upper(format, hex, spaces, zeroes) + len;
	free(hex);
	return (rlen);
}

int		ft_printf_hex_lower(t_printf *format, char *hex, int spaces, int zeroes)
{
	int rlen;

	rlen = 0;
	if (format->flag_minus == TRUE)
	{
		rlen += ft_write_zeroes(zeroes);
		ft_putstr_check(format, hex);
		rlen += ft_write_spaces(spaces);
	}
	else if (format->precision_check == TRUE || format->flag_zero == FALSE)
	{
		rlen += ft_write_spaces(spaces);
		rlen += ft_write_zeroes(zeroes);
		ft_putstr_check(format, hex);
	}
	else if (format->precision_check == FALSE)
	{
		rlen += ft_write_zeroes(spaces);
		ft_putstr_check(format, hex);
	}
	return (rlen);
}

int		ft_printf_hex_upper(t_printf *format, char *hex, int spaces, int zeroes)
{
	int rlen;

	rlen = 0;
	if (format->flag_minus == TRUE)
	{
		rlen += ft_write_zeroes(zeroes);
		ft_putstr_upper_check(format, hex);
		rlen += ft_write_spaces(spaces);
	}
	else if (format->precision_check == TRUE || format->flag_zero == FALSE)
	{
		rlen += ft_write_spaces(spaces);
		rlen += ft_write_zeroes(zeroes);
		ft_putstr_upper_check(format, hex);
	}
	else if (format->precision_check == FALSE)
	{
		rlen += ft_write_zeroes(spaces);
		ft_putstr_upper_check(format, hex);
	}
	return (rlen);
}
