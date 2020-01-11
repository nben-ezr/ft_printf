/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 00:34:53 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/15 07:33:28 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	size_t	totallen;

	if (s1 == NULL || s2 == NULL)
		return (0);
	totallen = ft_strlen(s1) + ft_strlen(s2) + 1;
	newstring = malloc(totallen * sizeof(char));
	if (newstring == NULL)
		return (0);
	newstring = ft_strcpy(newstring, (char*)s1);
	newstring = ft_strcat(newstring, s2);
	return (newstring);
}
