/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 01:22:04 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:38:41 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*scopy;

	scopy = s;
	while (n > 0)
	{
		*scopy = '\0';
		scopy++;
		n--;
	}
	s = scopy;
}
