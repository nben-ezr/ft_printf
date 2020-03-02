/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 00:24:26 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/03/01 19:59:03 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf(char *str, ...)
{
	t_printf	format;
	int			len;

	va_start(format.list, str);
	len = 0;
	ft_initialize_struct(&format, str);
	while (*(format.input_str) != '\0' && format.error_check == FALSE)
	{
		if (*(format.input_str) == '%')
		{
			ft_reinitialize_struct(&format);
			format.input_str++;
			if (ft_check_valid_input(format.input_str) == 1)
				len += ft_printf_check_asterisk(&format);
		}
		else if (*(format.input_str) != '%' && format.error_check == FALSE)
		{
			ft_putchar(*(format.input_str));
			format.input_str++;
			len++;
		}
	}
	va_end(format.list);
	return (format.error_check ? -1 : len);
}

int		ft_printf_check_asterisk(t_printf *format)
{
	int		len;

	len = 0;
	if (ft_chrcount_till_conversion(format->input_str, '*') == 2)
	{
		len += ft_printf_check_all(format, va_arg(format->list, int),  \
			va_arg(format->list, int));
	}
	else if (ft_chrcount_till_conversion(format->input_str, '*') == 1 \
				&& ft_check_asterisk(format->input_str, '*') == 0)
	{
		len += ft_printf_check_all(format, 0, va_arg(format->list, int));
	}
	else if (ft_chrcount_till_conversion(format->input_str, '*') == 1  \
				&& ft_check_asterisk(format->input_str, '*') == 1)
	{
		len += ft_printf_check_all(format, va_arg(format->list, int), 0);
	}
	else if (*(format->input_str) == '%')
		len += ft_printf_check_all(format, 0, 0);
	else
		len += ft_printf_check_all(format, 0, 0);
	return (len);
}
