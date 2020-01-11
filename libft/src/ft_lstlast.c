/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 23:42:49 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:39:16 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*traverse;

	traverse = lst;
	if (lst == NULL)
		return (0);
	while (traverse->next != NULL)
		traverse = traverse->next;
	return (traverse);
}
