/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 00:12:47 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:40:34 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static char	*ft_concat(char *substring, size_t len, const char *s, \
	unsigned int start)
{
	size_t	i;

	i = 0;
	while (len > 0 && s[start] != '\0')
	{
		substring[i] = s[start];
		i++;
		start++;
		len--;
	}
	substring[i] = '\0';
	return (substring);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	int		startcopy;
	size_t	sublength;

	if (s == NULL)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	sublength = 0;
	startcopy = start;
	while (s[startcopy] != '\0')
	{
		sublength++;
		startcopy++;
	}
	if (sublength > len)
		sublength = len;
	substring = malloc((sublength + 1) * sizeof(char));
	if (substring == NULL)
		return (0);
	substring = ft_concat(substring, len, s, start);
	return (substring);
}
