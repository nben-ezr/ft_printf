/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chrsearch.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/04 22:08:12 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/12/14 00:34:45 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_chrsearch(char *str, char look_for)
{
	while (*str != '\0')
	{
		if (*str == look_for)
			return (1);
		str++;
	}
	return (0);
}
