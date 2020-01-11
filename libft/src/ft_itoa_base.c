/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/18 23:24:27 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/12/29 02:24:32 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

static int	ft_calc_length(int nbr, int base)
{
	int length;

	length = 0;
	if (nbr < 0)
	{
		length++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		nbr /= base;
		length++;
	}
	return (length);
}

static char	*ft_itoa_fill(int length, char *itoa_str, int base, int nbr)
{
	itoa_str[length] = '\0';
	if (nbr == 0)
		itoa_str[0] = '0';
	if (nbr < 0)
	{
		nbr *= -1;
		itoa_str[0] = '-';
	}
	while (nbr > 0)
	{
		length--;
		if (base <= 10)
			itoa_str[length] = (nbr % base) + '0';
		else
			itoa_str[length] = (nbr % base) + (nbr % base < 10 ? '0' : 'a' - \
																		10);
		nbr /= base;
	}
	return (itoa_str);
}

char		*ft_itoa_base(int nbr, int base)
{
	int		length;
	char	*itoa_str;

	length = ft_calc_length(nbr, base);
	itoa_str = malloc(sizeof(char) * (length + 1));
	if (itoa_str == NULL)
		return (NULL);
	itoa_str = ft_itoa_fill(length, itoa_str, base, nbr);
	return (itoa_str);
}
