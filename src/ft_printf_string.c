/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_string.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/20 01:41:48 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/08 23:59:18 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf_string(t_printf *format, char *arg)
{
	size_t	len;
	int		rlen;
	int		padding;
	int		malloc;

	malloc = FALSE;
	rlen = 0;
	if (arg == NULL)
	{
		arg = ft_strdup("(null)");
		malloc = TRUE;
	}
	if (format->precision_check == TRUE && format->precision >= 0)
	{
		arg = ft_strndup(arg, format->precision);
		malloc = TRUE;
	}
	len = ft_strlen(arg);
	padding = ft_count_spaces_string(format, len);
	rlen = len + ft_printf_string2(format, arg, padding);
	if (malloc == TRUE)
		free(arg);
	return (rlen);
}

int		ft_printf_string2(t_printf *format, char *arg, int padding)
{
	int		rlen;

	rlen = 0;
	if (format->flag_minus == TRUE)
	{
		ft_putstr(arg);
		rlen += ft_write_spaces(padding);
	}
	else if (format->flag_zero == TRUE)
	{
		rlen += ft_write_zeroes(padding);
		ft_putstr(arg);
	}
	else
	{
		rlen += ft_write_spaces(padding);
		ft_putstr(arg);
	}
	return (rlen);
}
