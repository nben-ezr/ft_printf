/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_char.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/11 23:07:36 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/20 16:44:57 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf_char(t_printf *format, char c)
{
	int		rlen;
	int		spaces;

	rlen = 0;
	spaces = format->width - 1;
	if (format->flag_minus == TRUE)
	{
		ft_putchar(c);
		rlen += ft_write_spaces(spaces);
	}
	else
	{
		rlen += ft_write_spaces(spaces);
		ft_putchar(c);
	}
	return (rlen + 1);
}
