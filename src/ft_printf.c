/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 00:24:26 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/09 00:15:26 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf(char *str, ...)
{
	va_list		list;
	int			len;

	va_start(list, str);
	len = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (ft_check_valid_input(str) == 1)
				len += ft_printf_check_asterisk(list, &str);
		}
		else if (*str != '%')
		{
			ft_putchar(*str);
			str++;
			len++;
		}
	}
	va_end(list);
	return (len);
}

int		ft_printf_check_asterisk(va_list list, char **str)
{
	int		len;

	len = 0;
	if (ft_chrcount_till_conversion(*str, '*') == 2)
	{
		len += ft_printf_check_all(str, va_arg(list, int),  \
			va_arg(list, int), va_arg(list, void*));
	}
	else if (ft_chrcount_till_conversion(*str, '*') == 1 \
				&& ft_check_asterisk(*str, '*') == 0)
	{
		len += ft_printf_check_all(str, 0, va_arg(list, int), \
					va_arg(list, void*));
	}
	else if (ft_chrcount_till_conversion(*str, '*') == 1  \
				&& ft_check_asterisk(*str, '*') == 1)
	{
		len += ft_printf_check_all(str, va_arg(list, int), 0, \
										va_arg(list, void*));
	}
	else if (**str == '%')
		len += ft_printf_check_all(str, 0, 0, 0);
	else
		len += ft_printf_check_all(str, 0, 0, va_arg(list, void*));
	return (len);
}
