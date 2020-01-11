/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 17:46:59 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:40:26 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	confirm(char *str, char *needle, size_t len)
{
	while (*str == *needle)
	{
		if (len == 0)
			return (0);
		str++;
		needle++;
		if (*needle == '\0')
			return (1);
		len--;
	}
	return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;

	str = (char*)haystack;
	if (*needle == '\0')
		return ((char*)haystack);
	while (*str != '\0' && len > 0)
	{
		if (*str == *needle)
			if (confirm(str, (char*)needle, len) == 1)
				return (str);
		str++;
		len--;
	}
	return (0);
}
