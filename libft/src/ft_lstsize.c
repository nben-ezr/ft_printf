/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 23:36:55 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:39:23 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*traverse;

	count = 1;
	if (lst == NULL)
		return (0);
	traverse = lst;
	while (traverse->next != NULL)
	{
		count++;
		traverse = traverse->next;
	}
	return (count);
}
