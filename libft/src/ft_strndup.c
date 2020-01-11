/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strndup.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/29 01:42:40 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/12/29 01:46:07 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char			*ft_strndup(const char *s1, size_t len)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = malloc((len + 1) * sizeof(char));
	if (s2 == NULL)
		return (0);
	while (s1[i] != '\0' && len > 0)
	{
		s2[i] = s1[i];
		i++;
		len--;
	}
	s2[i] = '\0';
	return (s2);
}
