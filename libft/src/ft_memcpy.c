/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 01:28:47 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:39:35 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dstcopy;
	char	*srccopy;

	dstcopy = dst;
	srccopy = (char*)src;
	if (dstcopy == 0 && srccopy == 0 && n > 0)
		return (0);
	while (n > 0)
	{
		*dstcopy = *srccopy;
		dstcopy++;
		srccopy++;
		n--;
	}
	return (dst);
}
