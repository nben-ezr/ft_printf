/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/05 04:12:52 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/03/02 00:55:11 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	ft_calc_length(unsigned int nbr, int base)
{
	int length;

	length = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr /= base;
		length++;
	}
	return (length);
}

static char	*ft_itoa_fill(int length, char *itoa_str, int base, \
							unsigned int nbr)
{
	itoa_str[length] = '\0';
	if (nbr == 0)
		itoa_str[0] = '0';
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

char		*ft_utoa_base(unsigned int nbr, int base)
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
