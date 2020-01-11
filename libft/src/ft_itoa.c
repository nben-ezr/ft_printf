/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 21:03:02 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:38:57 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static char		*malloc_int(int n, size_t length)
{
	char	*itoa;

	itoa = malloc((length + 1) * sizeof(char));
	if (itoa == NULL)
		return (0);
	itoa[length] = '\0';
	if (n == 0)
		itoa[0] = '0';
	if (n < 0)
	{
		n = n * -1;
		*itoa = '-';
	}
	while (n > 0)
	{
		itoa[length - 1] = (n % 10) + '0';
		n /= 10;
		length--;
	}
	return (itoa);
}

char			*ft_itoa(int n)
{
	size_t	length;
	int		ncopy;

	length = 0;
	ncopy = n;
	if (ncopy < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		ncopy = ncopy * -1;
		length++;
	}
	if (ncopy == 0)
		length++;
	else
	{
		while (ncopy > 0)
		{
			ncopy /= 10;
			length++;
		}
	}
	return (malloc_int(n, length));
}
