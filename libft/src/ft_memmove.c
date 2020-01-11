/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 01:57:08 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:39:38 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static unsigned char	*backwards(unsigned char *dst, unsigned char *src, \
									size_t len)
{
	while (len > 0)
	{
		*dst = *src;
		dst--;
		src--;
		len--;
	}
	return (dst);
}

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstcopy;
	unsigned char	*srccopy;
	size_t			i;

	dstcopy = (unsigned char*)dst;
	srccopy = (unsigned char*)src;
	i = 0;
	if (dstcopy == 0 && srccopy == 0 && len > 0)
		return (0);
	if (dstcopy < srccopy)
		while (len > i)
		{
			dstcopy[i] = srccopy[i];
			i++;
		}
	else
		dstcopy = backwards(dstcopy + (len - 1), srccopy + (len - 1), len);
	return (dst);
}
