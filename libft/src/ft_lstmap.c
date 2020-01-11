/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 03:44:57 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:39:18 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*templist;

	if (lst == NULL || f == NULL)
		return (0);
	newlist = ft_lstnew(f(lst->content));
	if (newlist == NULL)
	{
		return (0);
		ft_lstclear(&newlist, del);
	}
	if (lst->next == NULL)
		return (newlist);
	while (lst->next != NULL)
	{
		lst = lst->next;
		templist = ft_lstnew(f(lst->content));
		if (templist == NULL)
		{
			ft_lstclear(&newlist, del);
			return (0);
		}
		ft_lstadd_back(&newlist, templist);
	}
	return (newlist);
}
