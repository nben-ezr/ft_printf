/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extra_functions4.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/05 03:07:06 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/05 03:45:22 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr_check(t_printf *format, int arg)
{
	if (arg > 0 || format->precision_check == FALSE)
		ft_putnbr(arg);
}

void	ft_putnbr_check_unsigned(t_printf *format, unsigned int arg)
{
	if (arg > 0 || format->precision_check == FALSE)
		ft_putnbr_unsigned(arg);
}

void	ft_putstr_check(t_printf *format, char *hex)
{
	if (ft_strlen(hex) == 1 && *hex == '0' && format->precision_check == TRUE \
		&& format->precision == 0)
	{
		return ;
	}
	else
		ft_putstr(hex);
}

void	ft_putstr_upper_check(t_printf *format, char *hex)
{
	size_t	i;

	i = 0;
	if (ft_strlen(hex) == 1 && *hex == '0' && format->precision_check == TRUE \
		&& format->precision == 0)
	{
		return ;
	}
	else
	{
		while (hex[i] != '\0')
		{
			hex[i] = ft_toupper(hex[i]);
			ft_putchar(hex[i]);
			i++;
		}
	}
}
