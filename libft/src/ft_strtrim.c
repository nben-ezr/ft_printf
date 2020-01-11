/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 19:18:12 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/11/13 18:40:32 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static char		*create_string(const char *s1, const char *set, \
								char *newstring, size_t mallocsize)
{
	const char	*setbegin;

	setbegin = set;
	while (*set != '\0')
	{
		while (*s1 != *set && *set != '\0')
			set++;
		if (*set != '\0')
		{
			s1++;
			set = setbegin;
		}
	}
	while (mallocsize > 1)
	{
		*newstring = *s1;
		newstring++;
		s1++;
		mallocsize--;
	}
	*newstring = '\0';
	return (newstring);
}

static size_t	ft_count_end(char const *s1, char const *set)
{
	size_t		count;
	const char	*setbegin;

	setbegin = set;
	count = 0;
	while (*s1 != '\0')
	{
		while (*s1 != *set)
		{
			if (*set == '\0')
			{
				return (count);
			}
			set++;
		}
		set = setbegin;
		count++;
		s1--;
	}
	return (count);
}

static size_t	ft_count_front(char const *s1, char const *set)
{
	size_t		count;
	const char	*setbegin;

	setbegin = set;
	count = 0;
	while (*s1 != '\0')
	{
		while (*s1 != *set)
		{
			if (*set == '\0')
			{
				return (count);
			}
			set++;
		}
		set = setbegin;
		count++;
		s1++;
	}
	return (count);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t		beginsize;
	size_t		endsize;
	size_t		mallocsize;
	char		*strbegin;
	char		*newstring;

	if (s1 == NULL)
		return (0);
	beginsize = ft_count_front(s1, set);
	if (beginsize >= ft_strlen(s1))
		mallocsize = 1;
	else
	{
		endsize = ft_count_end(s1 + (ft_strlen(s1) - 1), set);
		mallocsize = ft_strlen(s1) - beginsize - endsize + 1;
	}
	newstring = malloc(mallocsize * sizeof(char));
	if (newstring == NULL)
		return (0);
	strbegin = newstring;
	newstring = create_string(s1, set, newstring, mallocsize);
	return (strbegin);
}
