/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 02:06:35 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:39:32 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1copy;
	unsigned char	*s2copy;

	s1copy = (unsigned char*)s1;
	s2copy = (unsigned char*)s2;
	while (n > 0)
	{
		if (*s1copy != *s2copy)
		{
			return (*s1copy - *s2copy);
		}
		s1copy++;
		s2copy++;
		n--;
	}
	return (0);
}
