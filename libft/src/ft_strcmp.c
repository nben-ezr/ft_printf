/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:58:45 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/04 22:34:09 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const unsigned char *s1, const unsigned char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			return (*s1 - *s2);
		}
	}
	return (*s1 - *s2);
}
