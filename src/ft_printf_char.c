/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_char.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/11 23:07:36 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/03/02 01:46:41 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf_char(t_printf *format, char c)
{
	int		rlen;
	int		padding;

	rlen = 0;
	padding = format->width - 1;
	if (format->flag_minus == TRUE)
	{
		ft_putchar(c);
		rlen += ft_write_spaces(padding);
	}
	else if (format->flag_zero == TRUE)
	{
		rlen += ft_write_zeroes(padding);
		ft_putchar(c);
	}
	else
	{
		rlen += ft_write_spaces(padding);
		ft_putchar(c);
	}
	return (rlen + 1);
}
