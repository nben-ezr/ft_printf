/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extra_functions5.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/21 01:29:35 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/03/02 01:53:21 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_initialize_struct(t_printf *format, char *input_str)
{
	format->flag_minus = FALSE;
	format->flag_zero = FALSE;
	format->flag_plus = FALSE;
	format->flag_space = FALSE;
	format->precision_check = FALSE;
	format->width = 0;
	format->precision = 0;
	format->specifier = 0;
	format->error_check = FALSE;
	format->input_str = input_str;
}

void	ft_reinitialize_struct(t_printf *format)
{
	format->flag_minus = FALSE;
	format->flag_zero = FALSE;
	format->flag_plus = FALSE;
	format->flag_space = FALSE;
	format->precision_check = FALSE;
	format->width = 0;
	format->precision = 0;
	format->specifier = 0;
}

char	*ft_strndup2(const char *s1, size_t len, int bool)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = malloc((len + 1) * sizeof(char));
	if (s2 == NULL)
		return (0);
	while (s1[i] != '\0' && len > 0)
	{
		s2[i] = s1[i];
		i++;
		len--;
	}
	s2[i] = '\0';
	if (bool == TRUE)
		free((char*)s1);
	return (s2);
}
