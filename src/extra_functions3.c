/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extra_functions3.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/29 02:56:57 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/21 01:31:03 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_chrcount_till_conversion(char *input_str, char look_for)
{
	int	len;

	len = 0;
	while (*input_str != '\0' && \
			ft_check_valid(*input_str) == 0)
	{
		if (*input_str == look_for)
			len++;
		input_str++;
	}
	return (len);
}

int		ft_check_asterisk(char *input_str, char look_for)
{
	while (*input_str != '\0' && *input_str != '.')
	{
		if (*input_str == look_for)
			return (1);
		input_str++;
	}
	return (0);
}

int		ft_check_valid(char check)
{
	if (check == 'c' || check == 's' || check == 'p' || check == 'd' \
			|| check == 'i' || check == 'u' || check == 'x'			\
				|| check == 'X' || check == '%')
	{
		return (1);
	}
	return (0);
}

int		ft_check_valid_input(char *check)
{
	while (*check != '\0')
	{
		if (*check == 'c' || *check == 's' || *check == 'p' || *check == 'd' \
			|| *check == 'i' || *check == 'u' || *check == 'x'			\
				|| *check == 'X' || *check == '%')
		{
			return (1);
		}
		check++;
	}
	return (0);
}

int		malloc_check(char *str, t_printf *format)
{
	if (str == NULL)
	{
		format->error_check = TRUE;
		return (FALSE);
	}
	else
		return (TRUE);
}
