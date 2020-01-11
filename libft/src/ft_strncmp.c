/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 19:37:42 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:40:24 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1copy;
	unsigned char	*s2copy;

	while (n > 0)
	{
		s1copy = (unsigned char*)s1;
		s2copy = (unsigned char*)s2;
		if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		else
		{
			return (*s1copy - *s2copy);
		}
		n--;
	}
	return (0);
}
