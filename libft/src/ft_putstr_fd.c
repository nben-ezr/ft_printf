/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 01:39:42 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:39:54 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	char	c;

	if (s == 0)
		return ;
	while (*s != '\0')
	{
		c = *s;
		write(fd, &c, 1);
		s++;
	}
}
