/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 16:12:42 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:38:36 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_atoi(const char *str)
{
	int				sign;
	unsigned long	outcome;

	sign = 1;
	outcome = 0;
	while (ft_isspace((char*)str) == 1)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str) == 1)
	{
		if (outcome > 9223372036854775807 && sign == 1)
			return (-1);
		if (outcome > 9223372036854775807 && sign == -1)
			return (0);
		outcome = outcome * 10 + (*str - '0');
		str++;
	}
	return (outcome * sign);
}
