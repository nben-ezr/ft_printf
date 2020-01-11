/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 01:14:00 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:39:41 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bcopy;
	size_t			i;

	i = 0;
	bcopy = b;
	while (len > i)
	{
		bcopy[i] = c;
		i++;
	}
	return (b);
}
