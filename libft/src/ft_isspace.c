/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isspace_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 16:19:33 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/02 22:28:37 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_isspace(char *str)
{
	if (*str == ' ' || *str == '\v' || *str == '\t' || *str == '\r' \
		|| *str == '\n' || *str == '\f')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
