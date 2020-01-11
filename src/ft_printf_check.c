/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_check.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/04 20:48:08 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/07 23:34:34 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf_check_all(char **input_str, int width, int precision, \
								void *arg)
{
	t_printf	*format;
	int			len;

	len = 0;
	format = malloc(sizeof(t_printf));
	ft_printf_check_flag(input_str, format);
	ft_printf_check_width(input_str, format, width);
	ft_printf_check_precision(input_str, format, precision);
	ft_printf_check_specifier(input_str, format);
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
	free(format);
	return (len);
}

void	ft_printf_check_flag(char **input_str, t_printf *format)
{
	format->flag_minus = FALSE;
	format->flag_zero = FALSE;
	format->flag_plus = FALSE;
	format->flag_space = FALSE;
	while (ft_flag_checker(input_str) == TRUE)
	{
		if (**input_str == '-')
			format->flag_minus = TRUE;
		else if (**input_str == '0')
			format->flag_zero = TRUE;
		else if (**input_str == '+')
			format->flag_plus = TRUE;
		else if (**input_str == ' ')
			format->flag_space = TRUE;
		(*input_str)++;
	}
}

void	ft_printf_check_width(char **input_str, t_printf *format, int width)
{
	int length;

	length = 0;
	format->width = width;
	if (**input_str == '*')
	{
		(*input_str)++;
		if (format->width < 0)
		{
			format->flag_minus = TRUE;
			format->width *= -1;
		}
		return ;
	}
	if (ft_isdigit(**input_str) == 1)
	{
		format->width = ft_atoi_modified(*input_str, &length);
	}
	while (length > 0)
	{
		(*input_str)++;
		length--;
	}
}

void	ft_printf_check_precision(char **input_str, t_printf *format, \
										int precision)
{
	int length;

	length = 0;
	format->precision = precision;
	format->precision_check = FALSE;
	if (**input_str == '.')
	{
		(*input_str)++;
		format->precision_check = TRUE;
	}
	if (**input_str == '*')
	{
		(*input_str)++;
		return ;
	}
	if (ft_isdigit(**input_str) == 1)
	{
		format->precision = ft_atoi_modified(*input_str, &length);
	}
	while (length > 0)
	{
		(*input_str)++;
		length--;
	}
}

void	ft_printf_check_specifier(char **input_str, t_printf *format)
{
	if (ft_check_valid(**input_str) == 1)
		format->specifier = **input_str;
	(*input_str)++;
}
