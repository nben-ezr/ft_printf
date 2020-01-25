/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extra_functions.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/04 22:49:14 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/21 00:38:28 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_count_length(t_printf format, int arg)
{
	int len;

	len = 0;
	if (format.precision_check == TRUE && arg == 0)
		return (0);
	else if (arg == 0)
		return (1);
	if (arg < 0)
		len++;
	while (arg != 0)
	{
		len++;
		arg = arg / 10;
	}
	return (len);
}

int		ft_count_length_unsigned(t_printf format, unsigned int arg)
{
	int len;

	len = 0;
	if (format.precision_check == TRUE && arg == 0)
		return (0);
	else if (arg == 0)
		return (1);
	while (arg > 0)
	{
		len++;
		arg = arg / 10;
	}
	return (len);
}

int		ft_atoi_modified(const char *str, int *length)
{
	unsigned long	outcome;

	outcome = 0;
	while (ft_isdigit(*str) == 1)
	{
		outcome = outcome * 10 + (*str - '0');
		str++;
		(*length)++;
	}
	return (outcome);
}

int		ft_flag_checker(char *input_str)
{
	if (*input_str == '-' || *input_str == ' ' || \
			*input_str == '+' || *input_str == '0')
		return (TRUE);
	else
		return (FALSE);
}

void	ft_loop_string(int length, t_printf *format)
{
	while (length > 0)
	{
		length--;
		format->input_str++;
	}
}
