/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_unsigned.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/29 02:17:39 by nben-ezr       #+#    #+#                */
/*   Updated: 2019/12/29 02:18:45 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putnbr_unsigned(unsigned int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr_unsigned(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr % 10 + '0');
}
