/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 03:39:41 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:39:13 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*traverse;

	if (lst == NULL)
		return ;
	traverse = lst;
	while (traverse->next != NULL)
	{
		f(traverse->content);
		traverse = traverse->next;
	}
	f(traverse->content);
}
