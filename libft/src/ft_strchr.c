/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 17:07:24 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/02 19:53:07 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((char)c == *s)
		{
			return ((char*)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char*)s);
	}
	return (0);
}
