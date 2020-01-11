/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 20:32:37 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:40:29 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*scopy;

	scopy = (char*)s;
	while (*s != '\0' && (char)c != '\0')
	{
		if (*s == (char)c)
		{
			scopy = (char*)s;
		}
		s++;
		if (*s == '\0' && *scopy == c)
		{
			return (scopy);
		}
	}
	if ((char)c == '\0')
	{
		while (*s != '\0')
			s++;
		return ((char*)s);
	}
	return (0);
}
