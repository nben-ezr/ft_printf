/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 23:45:24 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:39:03 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*traverse;

	traverse = *alst;
	if (*alst == NULL)
		*alst = new;
	else
	{
		while (traverse->next != NULL)
			traverse = traverse->next;
		traverse->next = new;
	}
}
