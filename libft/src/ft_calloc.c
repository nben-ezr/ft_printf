/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/03 02:33:25 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:38:43 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*memory;
	unsigned char	*memstr;
	size_t			i;

	i = count * size;
	memory = malloc(i);
	if (memory == NULL)
		return (0);
	memstr = memory;
	while (i > 0)
	{
		*memstr = 0;
		memstr++;
		i--;
	}
	return (memory);
}
