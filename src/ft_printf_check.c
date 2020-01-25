/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_check.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/04 20:48:08 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/21 00:15:30 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf_check_all(t_printf *format, int width, int precision, \
								void *arg)
{
	int			len;

	len = 0;
	ft_printf_check_flag(format);
	ft_printf_check_width(format, width);
	ft_printf_check_precision(format, precision);
	ft_printf_check_specifier(format);
	if (format->specifier == 'c')
		len = ft_printf_char(format, (char)arg);
	if (format->specifier == 'i' || format->specifier == 'd')
		len = ft_printf_integer(format, (int)arg);
	if (format->specifier == 'u')
		len = ft_printf_unsigned(format, (unsigned int)arg);
	if (format->specifier == 's')
		len = ft_printf_string(format, (char*)arg);
	if (format->specifier == 'x' || format->specifier == 'X')
		len = ft_printf_hex(format, (unsigned int)arg);
	if (format->specifier == 'p')
		len = ft_printf_address(format, (unsigned long)arg);
	if (format->specifier == '%')
		len = ft_printf_percentage(format);
	return (len);
}

void	ft_printf_check_flag(t_printf *format)
{
	while (ft_flag_checker(format->input_str) == TRUE)
	{
		if (*(format->input_str) == '-')
			format->flag_minus = TRUE;
		else if (*(format->input_str) == '0')
			format->flag_zero = TRUE;
		else if (*(format->input_str) == '+')
			format->flag_plus = TRUE;
		else if (*(format->input_str) == ' ')
			format->flag_space = TRUE;
		format->input_str++;
	}
}

void	ft_printf_check_width(t_printf *format, int width)
{
	int length;

	length = 0;
	format->width = width;
	if (*(format->input_str) == '*')
	{
		format->input_str++;
		if (format->width < 0)
		{
			format->flag_minus = TRUE;
			format->width *= -1;
		}
		return ;
	}
	if (ft_isdigit(*(format->input_str)) == 1)
	{
		format->width = ft_atoi_modified(format->input_str, &length);
	}
	while (length > 0)
	{
		format->input_str++;
		length--;
	}
}

void	ft_printf_check_precision(t_printf *format, int precision)
{
	int length;

	length = 0;
	format->precision = precision;
	if (*(format->input_str) == '.')
	{
		format->input_str++;
		format->precision_check = TRUE;
	}
	if (*(format->input_str) == '*')
	{
		format->input_str++;
		if (format->precision < 0)
			format->precision_check = FALSE;
		return ;
	}
	if (ft_isdigit(*(format->input_str)) == 1)
	{
		format->precision = ft_atoi_modified(format->input_str, &length);
		if (format->precision < 0)
			format->precision_check = FALSE;
	}
	ft_loop_string(length, format);
}

void	ft_printf_check_specifier(t_printf *format)
{
	if (ft_check_valid(*(format->input_str)) == 1)
		format->specifier = *(format->input_str);
	format->input_str++;
}
