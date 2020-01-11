/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chrcount.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/04 23:06:50 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/04 00:56:31 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_chrcount(char *str, char look_for)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		if (*str == look_for)
			len++;
		str++;
	}
	return (len);
}
