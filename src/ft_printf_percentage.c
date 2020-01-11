/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_percentage.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/17 01:11:07 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/04 21:57:16 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf_percentage(t_printf *format)
{
	int rlen;
	int padding;

	rlen = 0;
	padding = format->width - 1;
	if (format->flag_minus == TRUE)
	{
		ft_putchar('%');
		rlen += ft_write_spaces(padding) + 1;
	}
	else if (format->flag_zero == TRUE)
	{
		rlen += ft_write_zeroes(padding) + 1;
		ft_putchar('%');
	}
	else
	{
		rlen += ft_write_spaces(padding) + 1;
		ft_putchar('%');
	}
	return (rlen);
}
