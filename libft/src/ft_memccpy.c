/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 01:50:48 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:39:28 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dstcopy;
	unsigned char	*srccopy;

	dstcopy = (unsigned char*)dst;
	srccopy = (unsigned char*)src;
	while (n > 0)
	{
		if (*srccopy == (unsigned char)c)
		{
			*dstcopy = (unsigned char)c;
			dstcopy++;
			return (dstcopy);
		}
		*dstcopy = *srccopy;
		dstcopy++;
		srccopy++;
		n--;
	}
	return (0);
}
