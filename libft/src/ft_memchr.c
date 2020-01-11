/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 02:01:42 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/17 00:26:56 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*scopy;

	scopy = (char*)s;
	while (n > 0)
	{
		if (*scopy == c)
			return (scopy);
		scopy++;
		n--;
	}
	return (0);
}
