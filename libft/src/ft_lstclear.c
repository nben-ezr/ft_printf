/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 15:17:40 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:39:08 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*oldelem;

	if (lst == NULL)
		return ;
	while ((*lst)->next != NULL)
	{
		oldelem = *lst;
		*lst = oldelem->next;
		ft_lstdelone(oldelem, del);
	}
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
