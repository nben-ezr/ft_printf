/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 22:41:18 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:40:14 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;
	int		appendsize;

	i = 0;
	j = 0;
	len = ft_strlen(dst);
	while (dst[i] != '\0')
		i++;
	if (i >= dstsize)
	{
		return (ft_strlen(src) + dstsize);
	}
	appendsize = dstsize - i - 1;
	while (appendsize > 0 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
		appendsize--;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (len + ft_strlen(src));
}
