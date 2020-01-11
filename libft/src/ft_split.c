/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 22:01:36 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:39:57 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static size_t	count_chars(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}

static size_t	count_arrays(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (count == 0)
			count = 1;
		if (*s == c)
		{
			while (*s == c)
				s++;
			if (*s == '\0')
				break ;
			count++;
		}
		if (*s != c)
			s++;
	}
	return (count);
}

static char		**free_array(char **newarray, size_t i)
{
	while (i >= 0)
	{
		free(newarray[i]);
		i--;
	}
	free(newarray);
	return (newarray);
}

static char		**malloc_and_free(const char *s, char c, size_t arraycount, \
									char **newarray)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (arraycount > 1)
	{
		newarray[i] = malloc((count_chars(s, c) + 1) * sizeof(char));
		if (newarray[i] == NULL)
			return (free_array(newarray, i));
		while (*s != '\0' && *s != c)
		{
			newarray[i][j] = *s;
			s++;
			j++;
		}
		while (*s == c && *s != '\0')
			s++;
		arraycount--;
		newarray[i][j] = '\0';
		i++;
		j = 0;
	}
	newarray[i] = NULL;
	return (newarray);
}

char			**ft_split(char const *s, char c)
{
	size_t	arraycount;
	char	**newarray;

	if (s == 0)
		return (0);
	while (*s == c && *s != '\0')
		s++;
	arraycount = count_arrays(s, c) + 1;
	newarray = malloc(arraycount * sizeof(char*));
	if (newarray == NULL)
		return (0);
	newarray = malloc_and_free(s, c, arraycount, newarray);
	return (newarray);
}
