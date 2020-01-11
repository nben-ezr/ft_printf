/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_address.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/18 22:41:26 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/08 23:16:23 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf_address(t_printf *format, unsigned long arg)
{
	int				len;
	int				rlen;
	int				spaces;
	int				zeroes;
	char			*hex;

	rlen = 0;
	hex = ft_ultoa_base(arg, 16);
	if (hex == NULL)
		return (0);
	len = ft_strlen(hex) + 2;
	if (len == 3 && arg == 0 && format->precision == 0 && \
			format->precision_check == TRUE)
		len = 2;
	spaces = ft_count_spaces(format, len, 0);
	if (format->precision > len - 2)
		spaces -= 2;
	if (format->precision > len - 2)
		zeroes = ft_count_zeroes(format, len - 2, 0);
	else
		zeroes = ft_count_zeroes(format, len, 0);
	rlen = ft_printf_address2(format, hex, spaces, zeroes) + len;
	free(hex);
	return (rlen);
}

int		ft_printf_address2(t_printf *format, char *hex, int spaces, int zeroes)
{
	int rlen;

	rlen = 0;
	if (format->flag_minus == TRUE)
	{
		ft_putstr("0x");
		rlen += ft_write_zeroes(zeroes);
		ft_putstr_check(format, hex);
		rlen += ft_write_spaces(spaces);
	}
	else if (format->precision_check == TRUE || format->flag_zero == FALSE)
	{
		rlen += ft_write_spaces(spaces);
		ft_putstr("0x");
		rlen += ft_write_zeroes(zeroes);
		ft_putstr_check(format, hex);
	}
	else if (format->precision_check == FALSE)
	{
		ft_putstr("0x");
		rlen += ft_write_zeroes(spaces);
		ft_putstr_check(format, hex);
	}
	return (rlen);
}
