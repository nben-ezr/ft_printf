/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extra_functions3.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/29 02:56:57 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/08 23:34:51 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_chrcount_till_conversion(char *str, char look_for)
{
	int	len;

	len = 0;
	while (*str != '\0' && ft_check_valid(*str) == 0)
	{
		if (*str == look_for)
			len++;
		str++;
	}
	return (len);
}

int		ft_check_asterisk(char *str, char look_for)
{
	while (*str != '\0' && *str != '.')
	{
		if (*str == look_for)
			return (1);
		str++;
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
