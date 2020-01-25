/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/04 21:27:03 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/21 01:20:47 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ft_printf.h"

int		main(void)
{
	char	s[] = "Hello World";
	int		d;
	int		len_mine;
	int		len_original;
	char	c;
	int		*p;

	p = &d;
	c = 'c';
	d = 515312;

	printf("\033[0;33m");
	len_mine = ft_printf("ft_printf: %.5s%7s\n", "yo", "boi");
	len_original = printf("printf:    %.5s%7s\n", "yo", "boi");
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}
/* ----------------------------------------------------------------- */

	printf("\033[0;33m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("percentage:\n---------------------\n");
	printf("\033[0m");


/* ----------------------------------------------------------------- */

	printf("\033[0;33m");
	len_mine = ft_printf("ft_printf: [%d%%fd]\n", d);
	len_original = printf("printf:    [%d%%fd]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}
/* -------------------------------------------------- */

	len_mine = ft_printf("\033[0;33mft_printf: [%c%%%dsahu%5.2dja%d%d]\n", c, d, d, d, d);
	len_original = printf("\033[0;33mprintf:    [%c%%%dsahu%5.2dja%d%d]\n", c, d, d, d, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

/* ----------------------------------------------------------------- */

	printf("\033[0;33m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("\033[0m");


/* ----------------------------------------------------------------- */


























/* ----------------------------------------------------------------- */

	printf("\033[0;32m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("character:\n---------------------\n");
	printf("\033[0m");


/* ----------------------------------------------------------------- */

	printf("\033[0;32m");
	len_mine = ft_printf("ft_printf: [%c]\n", c);
	len_original = printf("printf:    [%c]\n", c);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */


/* ----------------------------------------------------------------- */

	printf("\033[0;32m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("character:\n---------------------\n");
	printf("\033[0m");


/* ----------------------------------------------------------------- */


























/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("integers:\n---------------------\n");
	printf("\033[0m");

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, normal:\n");
	len_mine = ft_printf("ft_printf: [%d]\n", d);
	len_original = printf("printf:    [%d]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, width > len int\n");
	len_mine = ft_printf("ft_printf: [%9d]\n", d);
	len_original = printf("printf:    [%9d]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, precision > len int\n");
	len_mine = ft_printf("ft_printf: [%.9d]\n", d);
	len_original = printf("printf:    [%.9d]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, width > precision\n");
	len_mine = ft_printf("ft_printf: [%9.8d]\n", d);
	len_original = printf("printf:    [%9.8d]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, precision > width\n");
	len_mine = ft_printf("ft_printf: [%8.9d]\n", d);
	len_original = printf("printf:    [%8.9d]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, *: width\n");
	len_mine = ft_printf("ft_printf: [%*d]\n", 9, d);
	len_original = printf("printf:    [%*d]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, *: precision\n");
	len_mine = ft_printf("ft_printf: [%.*d]\n", 9, d);
	len_original = printf("printf:    [%.*d]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, *: width+precision\n");
	len_mine = ft_printf("ft_printf: [%*.*d]\n", 8, 9, d);
	len_original = printf("printf:    [%*.*d]\n", 8, 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("\033[0;31m");

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], normal:\n");
	len_mine = ft_printf("ft_printf: [%-d]\n", d);
	len_original = printf("printf:    [%-d]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], width > len int\n");
	len_mine = ft_printf("ft_printf: [%-9d]\n", d);
	len_original = printf("printf:    [%-9d]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], precision > len int\n");
	len_mine = ft_printf("ft_printf: [%-.9d]\n", d);
	len_original = printf("printf:    [%-.9d]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], width > precision\n");
	len_mine = ft_printf("ft_printf: [%-9.8d]\n", d);
	len_original = printf("printf:    [%-9.8d]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], precision > width\n");
	len_mine = ft_printf("ft_printf: [%-8.9d]\n", d);
	len_original = printf("printf:    [%-8.9d]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}
	
/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], *: width\n");
	len_mine = ft_printf("ft_printf: [%-*d]\n", 9, d);
	len_original = printf("printf:    [%-*d]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], *: precision\n");
	len_mine = ft_printf("ft_printf: [%-.*d]\n", 9, d);
	len_original = printf("printf:    [%-.*d]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], *: width+precision\n");
	len_mine = ft_printf("ft_printf: [%-*.*d]\n", 8, 9, d);
	len_original = printf("printf:    [%-*.*d]\n", 8, 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("\033[0;31m");

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], normal:\n");
	len_mine = ft_printf("ft_printf: [%0d]\n", d);
	len_original = printf("printf:    [%0d]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], width > len int\n");
	len_mine = ft_printf("ft_printf: [%09d]\n", d);
	len_original = printf("printf:    [%09d]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], precision > len int\n");
	len_mine = ft_printf("ft_printf: [%0.9d]\n", d);
	len_original = printf("printf:    [%0.9d]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], width > precision\n");
	len_mine = ft_printf("ft_printf: [%09.8d]\n", d);
	len_original = printf("printf:    [%09.8d]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], precision > width\n");
	len_mine = ft_printf("ft_printf: [%08.9d]\n", d);
	len_original = printf("printf:    [%08.9d]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], *: width\n");
	len_mine = ft_printf("ft_printf: [%0*d]\n", 9, d);
	len_original = printf("printf:    [%0*d]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], *: precision\n");
	len_mine = ft_printf("ft_printf: [%0.*d]\n", 9, d);
	len_original = printf("printf:    [%0.*d]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], *: width+precision\n");
	len_mine = ft_printf("ft_printf: [%0*.*d]\n", 8, 9, d);
	len_original = printf("printf:    [%0*.*d]\n", 8, 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}


/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("\033[0;31m");

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][+], width:\n");
	len_mine = ft_printf("ft_printf: [%0+5i]\n", 43);
	len_original = printf("printf:    [%0+5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}


/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][ ], width:\n");
	len_mine = ft_printf("ft_printf: [%0 5i]\n", 43);
	len_original = printf("printf:    [%0 5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}


/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][ ][-], width:\n");
	len_mine = ft_printf("ft_printf: [%0-+5i]\n", 43);
	len_original = printf("printf:    [%0-+5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][+][-], width:\n");
	len_mine = ft_printf("ft_printf: [%0+-5i]\n", 43);
	len_original = printf("printf:    [%0+-5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [+][-], width:\n");
	len_mine = ft_printf("ft_printf: [%+-5i]\n", 43);
	len_original = printf("printf:    [%+-5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [+][ ][-], width:\n");
	len_mine = ft_printf("ft_printf: [% +-5i]\n", 43);
	len_original = printf("printf:    [% +-5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][+][ ][-], width:\n");
	len_mine = ft_printf("ft_printf: [%0+- 5i]\n", 43);
	len_original = printf("printf:    [%0+- 5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][+], precision:\n");
	len_mine = ft_printf("ft_printf: [%0+.5i]\n", 43);
	len_original = printf("printf:    [%0+.5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}


/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][ ], precision:\n");
	len_mine = ft_printf("ft_printf: [%0 .5i]\n", 43);
	len_original = printf("printf:    [%0 .5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}


/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][ ][-], precision:\n");
	len_mine = ft_printf("ft_printf: [%0-+.5i]\n", 43);
	len_original = printf("printf:    [%0-+.5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][+][-], precision:\n");
	len_mine = ft_printf("ft_printf: [%0+-.5i]\n", 43);
	len_original = printf("printf:    [%0+-.5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [+][-], precision:\n");
	len_mine = ft_printf("ft_printf: [%+-.5i]\n", 43);
	len_original = printf("printf:    [%+-.5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [+][ ][-], precision:\n");
	len_mine = ft_printf("ft_printf: [% +-.5i]\n", 43);
	len_original = printf("printf:    [% +-.5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][+][ ][-], precision:\n");
	len_mine = ft_printf("ft_printf: [%0+- .5i]\n", 43);
	len_original = printf("printf:    [%0+- .5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}


/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][+], width>precision:\n");
	len_mine = ft_printf("ft_printf: [%0+8.5i]\n", 43);
	len_original = printf("printf:    [%0+8.5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}


/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][ ], width>precision:\n");
	len_mine = ft_printf("ft_printf: [%0 8.5i]\n", 43);
	len_original = printf("printf:    [%0 8.5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}


/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][ ][-], width>precision:\n");
	len_mine = ft_printf("ft_printf: [%0-+8.5i]\n", 43);
	len_original = printf("printf:    [%0-+8.5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][+][-], width>precision:\n");
	len_mine = ft_printf("ft_printf: [%0+-8.5i]\n", 43);
	len_original = printf("printf:    [%0+-8.5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [+][-], width>precision:\n");
	len_mine = ft_printf("ft_printf: [%+-8.5i]\n", 43);
	len_original = printf("printf:    [%+-8.5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [+][ ][-], width>precision:\n");
	len_mine = ft_printf("ft_printf: [% +-8.5i]\n", 43);
	len_original = printf("printf:    [% +-8.5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][+][ ][-], width>precision:\n");
	len_mine = ft_printf("ft_printf: [%0+- 8.5i]\n", 43);
	len_original = printf("printf:    [%0+- 8.5i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}


/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][+], precision>width:\n");
	len_mine = ft_printf("ft_printf: [%0+5.8i]\n", 43);
	len_original = printf("printf:    [%0+5.8i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}


/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][ ], precision>width:\n");
	len_mine = ft_printf("ft_printf: [%0 5.8i]\n", 43);
	len_original = printf("printf:    [%0 5.8i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}


/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][ ][-], precision>width:\n");
	len_mine = ft_printf("ft_printf: [%0-+5.8i]\n", 43);
	len_original = printf("printf:    [%0-+5.8i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][+][-], precision>width:\n");
	len_mine = ft_printf("ft_printf: [%0+-5.8i]\n", 43);
	len_original = printf("printf:    [%0+-5.8i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [+][-], precision>width:\n");
	len_mine = ft_printf("ft_printf: [%+-5.8i]\n", 43);
	len_original = printf("printf:    [%+-5.8i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [+][ ][-], precision>width:\n");
	len_mine = ft_printf("ft_printf: [% +-5.8i]\n", 43);
	len_original = printf("printf:    [% +-5.8i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("positive, flags: [0][+][ ][-], precision>width:\n");
	len_mine = ft_printf("ft_printf: [%0+- 5.8i]\n", 43);
	len_original = printf("printf:    [%0+- 5.8i]\n", 43);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* ----------------------------------------------------------------- */


/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("\033[0;31m");

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, negative input:\n");
	len_mine = ft_printf("ft_printf: [%d]\n", -d);
	len_original = printf("printf:    [%d]\n", -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, width > len int, negative input\n");
	len_mine = ft_printf("ft_printf: [%9d]\n", -d);
	len_original = printf("printf:    [%9d]\n", -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, precision > len int, negative input\n");
	len_mine = ft_printf("ft_printf: [%.9d]\n", -d);
	len_original = printf("printf:    [%.9d]\n", -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, width > precision, negative input\n");
	len_mine = ft_printf("ft_printf: [%9.8d]\n", -d);
	len_original = printf("printf:    [%9.8d]\n", -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, precision > width, negative input\n");
	len_mine = ft_printf("ft_printf: [%8.9d]\n", -d);
	len_original = printf("printf:    [%8.9d]\n", -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, *: width, negative input\n");
	len_mine = ft_printf("ft_printf: [%*d]\n", 9, -d);
	len_original = printf("printf:    [%*d]\n", 9, -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, *: precision, negative input\n");
	len_mine = ft_printf("ft_printf: [%.*d]\n", 9, -d);
	len_original = printf("printf:    [%.*d]\n", 9, -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, *: width+precision, negative input\n");
	len_mine = ft_printf("ft_printf: [%*.*d]\n", 8, 9, -d);
	len_original = printf("printf:    [%*.*d]\n", 8, 9, -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("\033[0;31m");

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], negative input:\n");
	len_mine = ft_printf("ft_printf: [%-d]\n", -d);
	len_original = printf("printf:    [%-d]\n", -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], width > len int, negative input\n");
	len_mine = ft_printf("ft_printf: [%-9d]\n", -d);
	len_original = printf("printf:    [%-9d]\n", -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], precision > len int, negative input\n");
	len_mine = ft_printf("ft_printf: [%-.9d]\n", -d);
	len_original = printf("printf:    [%-.9d]\n", -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], width > precision, negative input\n");
	len_mine = ft_printf("ft_printf: [%-9.8d]\n", -d);
	len_original = printf("printf:    [%-9.8d]\n", -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], precision > width, negative input\n");
	len_mine = ft_printf("ft_printf: [%-8.9d]\n", -d);
	len_original = printf("printf:    [%-8.9d]\n", -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}
	
/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], *: width, negative input\n");
	len_mine = ft_printf("ft_printf: [%-*d]\n", 9, -d);
	len_original = printf("printf:    [%-*d]\n", 9, -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], *: precision, negative input\n");
	len_mine = ft_printf("ft_printf: [%-.*d]\n", 9, -d);
	len_original = printf("printf:    [%-.*d]\n", 9, -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [-], *: width+precision, negative input\n");
	len_mine = ft_printf("ft_printf: [%-*.*d]\n", 8, 9, -d);
	len_original = printf("printf:    [%-*.*d]\n", 8, 9, -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("\033[0;31m");

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], negative input:\n");
	len_mine = ft_printf("ft_printf: [%0d]\n", -d);
	len_original = printf("printf:    [%0d]\n", -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], width > len int, negative input\n");
	len_mine = ft_printf("ft_printf: [%09d]\n", -d);
	len_original = printf("printf:    [%09d]\n", -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], precision > len int, negative input\n");
	len_mine = ft_printf("ft_printf: [%0.9d]\n", -d);
	len_original = printf("printf:    [%0.9d]\n", -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], width > precision, negative input\n");
	len_mine = ft_printf("ft_printf: [%09.8d]\n", -d);
	len_original = printf("printf:    [%09.8d]\n", -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], precision > width, negative input\n");
	len_mine = ft_printf("ft_printf: [%08.9d]\n", -d);
	len_original = printf("printf:    [%08.9d]\n", -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], *: width, negative input\n");
	len_mine = ft_printf("ft_printf: [%0*d]\n", 9, -d);
	len_original = printf("printf:    [%0*d]\n", 9, -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], *: precision, negative input\n");
	len_mine = ft_printf("ft_printf: [%0.*d]\n", 9, -d);
	len_original = printf("printf:    [%0.*d]\n", 9, -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: [0], *: width+precision, negative input\n");
	len_mine = ft_printf("ft_printf: [%0*.*d]\n", 8, 9, -d);
	len_original = printf("printf:    [%0*.*d]\n", 8, 9, -d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */


































/* ----------------------------------------------------------------- */

	printf("\033[0;34m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("unsigned:\n---------------------\n");
	printf("\033[0m");

/* ----------------------------------------------------------------- */

	printf("\033[0;34m");
	printf("positive:\n");
	len_mine = ft_printf("ft_printf: [%u]\n", 5000);
	len_original = printf("printf:    [%u]\n", 5000);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;34m");
	printf("negative:\n");
	len_mine = ft_printf("ft_printf: [%u]\n", -5000);
	len_original = printf("printf:    [%u]\n", -5000);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;34m");
	printf("negative, flags: [-] and width:\n");
	len_mine = ft_printf("ft_printf: [%-8u]\n", -5000);
	len_original = printf("printf:    [%-8u]\n", -5000);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */
















































/* ----------------------------------------------------------------- */

	printf("\033[0;35m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("string:\n---------------------\n");
	printf("\033[0m");

/* ----------------------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: none, normal:\n");
	len_mine = ft_printf("ft_printf: [%s]\n", s);
	len_original = printf("printf:    [%s]\n", s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: none, width > len int\n");
	len_mine = ft_printf("ft_printf: [%9s]\n", s);
	len_original = printf("printf:    [%9s]\n", s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: none, precision > len int\n");
	len_mine = ft_printf("ft_printf: [%.9s]\n", s);
	len_original = printf("printf:    [%.9s]\n", s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: none, width > precision\n");
	len_mine = ft_printf("ft_printf: [%9.8s]\n", s);
	len_original = printf("printf:    [%9.8s]\n", s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: none, precision > width\n");
	len_mine = ft_printf("ft_printf: [%8.9s]\n", s);
	len_original = printf("printf:    [%8.9s]\n", s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: none, *: width\n");
	len_mine = ft_printf("ft_printf: [%*s]\n", 9, s);
	len_original = printf("printf:    [%*s]\n", 9, s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: none, *: precision\n");
	len_mine = ft_printf("ft_printf: [%.*s]\n", 9, s);
	len_original = printf("printf:    [%.*s]\n", 9, s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: none, *: width+precision\n");
	len_mine = ft_printf("ft_printf: [%*.*s]\n", 8, 9, s);
	len_original = printf("printf:    [%*.*s]\n", 8, 9, s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("\033[0;35m");

/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: -, normal:\n");
	len_mine = ft_printf("ft_printf: [%-s]\n", s);
	len_original = printf("printf:    [%-s]\n", s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: -, width > len int\n");
	len_mine = ft_printf("ft_printf: [%-9s]\n", s);
	len_original = printf("printf:    [%-9s]\n", s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: -, precision > len int\n");
	len_mine = ft_printf("ft_printf: [%-.9s]\n", s);
	len_original = printf("printf:    [%-.9s]\n", s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: -, width > precision\n");
	len_mine = ft_printf("ft_printf: [%-9.8s]\n", s);
	len_original = printf("printf:    [%-9.8s]\n", s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: -, precision > width\n");
	len_mine = ft_printf("ft_printf: [%-8.9s]\n", s);
	len_original = printf("printf:    [%-8.9s]\n", s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}
	
/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: -, *: width\n");
	len_mine = ft_printf("ft_printf: [%-*s]\n", 9, s);
	len_original = printf("printf:    [%-*s]\n", 9, s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: -, *: precision\n");
	len_mine = ft_printf("ft_printf: [%-.*s]\n", 9, s);
	len_original = printf("printf:    [%-.*s]\n", 9, s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;35m");
	printf("flag: -, *: width+precision\n");
	len_mine = ft_printf("ft_printf: [%-*.*s]\n", 8, 9, s);
	len_original = printf("printf:    [%-*.*s]\n", 8, 9, s);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */




































/* ----------------------------------------------------------------- */

	printf("\033[0;36m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("hex_lower:\n---------------------\n");
	printf("\033[0m");

/* ----------------------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: none, normal:\n");
	len_mine = ft_printf("ft_printf: [%x]\n", d);
	len_original = printf("printf:    [%x]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: none, width > len int\n");
	len_mine = ft_printf("ft_printf: [%9x]\n", d);
	len_original = printf("printf:    [%9x]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: none, precision > len int\n");
	len_mine = ft_printf("ft_printf: [%.9x]\n", d);
	len_original = printf("printf:    [%.9x]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: none, width > precision\n");
	len_mine = ft_printf("ft_printf: [%9.8x]\n", d);
	len_original = printf("printf:    [%9.8x]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: none, precision > width\n");
	len_mine = ft_printf("ft_printf: [%8.9x]\n", d);
	len_original = printf("printf:    [%8.9x]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: none, *: width\n");
	len_mine = ft_printf("ft_printf: [%*x]\n", 9, d);
	len_original = printf("printf:    [%*x]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: none, *: precision\n");
	len_mine = ft_printf("ft_printf: [%.*x]\n", 9, d);
	len_original = printf("printf:    [%.*x]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: none, *: width+precision\n");
	len_mine = ft_printf("ft_printf: [%*.*x]\n", 8, 9, d);
	len_original = printf("printf:    [%*.*x]\n", 8, 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("\033[0;36m");

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: -, normal:\n");
	len_mine = ft_printf("ft_printf: [%-x]\n", d);
	len_original = printf("printf:    [%-x]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: -, width > len int\n");
	len_mine = ft_printf("ft_printf: [%-9x]\n", d);
	len_original = printf("printf:    [%-9x]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: -, precision > len int\n");
	len_mine = ft_printf("ft_printf: [%-.9x]\n", d);
	len_original = printf("printf:    [%-.9x]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: -, width > precision\n");
	len_mine = ft_printf("ft_printf: [%-9.8x]\n", d);
	len_original = printf("printf:    [%-9.8x]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: -, precision > width\n");
	len_mine = ft_printf("ft_printf: [%-8.9x]\n", d);
	len_original = printf("printf:    [%-8.9x]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}
	
/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: -, *: width\n");
	len_mine = ft_printf("ft_printf: [%-*x]\n", 9, d);
	len_original = printf("printf:    [%-*x]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: -, *: precision\n");
	len_mine = ft_printf("ft_printf: [%-.*x]\n", 9, d);
	len_original = printf("printf:    [%-.*x]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: -, *: width+precision\n");
	len_mine = ft_printf("ft_printf: [%-*.*x]\n", 8, 9, d);
	len_original = printf("printf:    [%-*.*x]\n", 8, 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("\033[0;36m");

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: 0, normal:\n");
	len_mine = ft_printf("ft_printf: [%0x]\n", d);
	len_original = printf("printf:    [%0x]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: 0, width > len int\n");
	len_mine = ft_printf("ft_printf: [%09x]\n", d);
	len_original = printf("printf:    [%09x]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: 0, precision > len int\n");
	len_mine = ft_printf("ft_printf: [%0.9x]\n", d);
	len_original = printf("printf:    [%0.9x]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: 0, width > precision\n");
	len_mine = ft_printf("ft_printf: [%09.8x]\n", d);
	len_original = printf("printf:    [%09.8x]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: 0, precision > width\n");
	len_mine = ft_printf("ft_printf: [%08.9x]\n", d);
	len_original = printf("printf:    [%08.9x]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: 0, *: width\n");
	len_mine = ft_printf("ft_printf: [%0*x]\n", 9, d);
	len_original = printf("printf:    [%0*x]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: 0, *: precision\n");
	len_mine = ft_printf("ft_printf: [%0.*x]\n", 9, d);
	len_original = printf("printf:    [%0.*x]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[0;36m");
	printf("flag: 0, *: width+precision\n");
	len_mine = ft_printf("ft_printf: [%0*.*x]\n", 8, 9, d);
	len_original = printf("printf:    [%0*.*x]\n", 8, 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}





































/* ----------------------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("hex_upper:\n---------------------\n");
	printf("\033[38;5;99m");

/* ----------------------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: none, normal:\n");
	len_mine = ft_printf("ft_printf: [%X]\n", d);
	len_original = printf("printf:    [%X]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: none, width > len int\n");
	len_mine = ft_printf("ft_printf: [%9X]\n", d);
	len_original = printf("printf:    [%9X]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: none, precision > len int\n");
	len_mine = ft_printf("ft_printf: [%.9X]\n", d);
	len_original = printf("printf:    [%.9X]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: none, width > precision\n");
	len_mine = ft_printf("ft_printf: [%9.8X]\n", d);
	len_original = printf("printf:    [%9.8X]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: none, precision > width\n");
	len_mine = ft_printf("ft_printf: [%8.9X]\n", d);
	len_original = printf("printf:    [%8.9X]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: none, *: width\n");
	len_mine = ft_printf("ft_printf: [%*X]\n", 9, d);
	len_original = printf("printf:    [%*X]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: none, *: precision\n");
	len_mine = ft_printf("ft_printf: [%.*X]\n", 9, d);
	len_original = printf("printf:    [%.*X]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: none, *: width+precision\n");
	len_mine = ft_printf("ft_printf: [%*.*X]\n", 8, 9, d);
	len_original = printf("printf:    [%*.*X]\n", 8, 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("\033[38;5;99m");

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: -, normal:\n");
	len_mine = ft_printf("ft_printf: [%-X]\n", d);
	len_original = printf("printf:    [%-X]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: -, width > len int\n");
	len_mine = ft_printf("ft_printf: [%-9X]\n", d);
	len_original = printf("printf:    [%-9X]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: -, precision > len int\n");
	len_mine = ft_printf("ft_printf: [%-.9X]\n", d);
	len_original = printf("printf:    [%-.9X]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: -, width > precision\n");
	len_mine = ft_printf("ft_printf: [%-9.8X]\n", d);
	len_original = printf("printf:    [%-9.8X]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: -, precision > width\n");
	len_mine = ft_printf("ft_printf: [%-8.9X]\n", d);
	len_original = printf("printf:    [%-8.9X]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}
	
/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: -, *: width\n");
	len_mine = ft_printf("ft_printf: [%-*X]\n", 9, d);
	len_original = printf("printf:    [%-*X]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: -, *: precision\n");
	len_mine = ft_printf("ft_printf: [%-.*X]\n", 9, d);
	len_original = printf("printf:    [%-.*X]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: -, *: width+precision\n");
	len_mine = ft_printf("ft_printf: [%-*.*X]\n", 8, 9, d);
	len_original = printf("printf:    [%-*.*X]\n", 8, 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("\033[38;5;99m");

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: 0, normal:\n");
	len_mine = ft_printf("ft_printf: [%0X]\n", d);
	len_original = printf("printf:    [%0X]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: 0, width > len int\n");
	len_mine = ft_printf("ft_printf: [%09X]\n", d);
	len_original = printf("printf:    [%09X]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: 0, precision > len int\n");
	len_mine = ft_printf("ft_printf: [%0.9X]\n", d);
	len_original = printf("printf:    [%0.9X]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: 0, width > precision\n");
	len_mine = ft_printf("ft_printf: [%09.8X]\n", d);
	len_original = printf("printf:    [%09.8X]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: 0, precision > width\n");
	len_mine = ft_printf("ft_printf: [%08.9X]\n", d);
	len_original = printf("printf:    [%08.9X]\n", d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: 0, *: width\n");
	len_mine = ft_printf("ft_printf: [%0*X]\n", 9, d);
	len_original = printf("printf:    [%0*X]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: 0, *: precision\n");
	len_mine = ft_printf("ft_printf: [%0.*X]\n", 9, d);
	len_original = printf("printf:    [%0.*X]\n", 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;99m");
	printf("flag: 0, *: width+precision\n");
	len_mine = ft_printf("ft_printf: [%0*.*X]\n", 8, 9, d);
	len_original = printf("printf:    [%0*.*X]\n", 8, 9, d);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}



































/* ----------------------------------------------------------------- */

	printf("\033[38;5;134m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("address:\n---------------------\n");
	printf("\033[38;5;134m");

/* ----------------------------------------------------------------- */

	printf("\033[38;5;134m");
	printf("flag: none, normal:\n");
	len_mine = ft_printf("ft_printf: [%p]\n", p);
	len_original = printf("printf:    [%p]\n", p);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;134m");
	printf("flag: none, width > len int\n");
	len_mine = ft_printf("ft_printf: [%20p]\n", p);
	len_original = printf("printf:    [%20p]\n", p);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */


	printf("\033[38;5;134m");
	printf("flag: none, *: width\n");
	len_mine = ft_printf("ft_printf: [%*p]\n", 20, p);
	len_original = printf("printf:    [%*p]\n", 20, p);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;134m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("\033[38;5;134m");

/* -------------------------------------------------- */

	printf("\033[38;5;134m");
	printf("flag: -, normal:\n");
	len_mine = ft_printf("ft_printf: [%-p]\n", p);
	len_original = printf("printf:    [%-p]\n", p);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;134m");
	printf("flag: -, width > len int\n");
	len_mine = ft_printf("ft_printf: [%-20p]\n", p);
	len_original = printf("printf:    [%-20p]\n", p);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;134m");
	printf("flag: -, *: width\n");
	len_mine = ft_printf("ft_printf: [%-*p]\n", 20, p);
	len_original = printf("printf:    [%-*p]\n", 20, p);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;134m");
	printf("flag: none, *: precision\n");
	len_mine = ft_printf("ft_printf: [%.*p]\n", 13, p);
	len_original = printf("printf:    [%.*p]\n", 13, p);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}
/* -------------------------------------------------- */

	printf("\033[38;5;134m");
	printf("flag: none, *: width\n");
	len_mine = ft_printf("ft_printf: [%*p]\n", 14, p);
	len_original = printf("printf:    [%*p]\n", 14, p);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;134m");
	printf("flag: none, *: precision>width\n");
	len_mine = ft_printf("ft_printf: [%*.*p]\n", 7, 16, p);
	len_original = printf("printf:    [%*.*p]\n", 7, 16, p);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;134m");
	printf("flag: none, *: width>precision\n");
	len_mine = ft_printf("ft_printf: [%*.*p]\n", 16, 7, p);
	len_original = printf("printf:    [%*.*p]\n", 16, 7, p);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;134m");
	printf("flag: none, *: precision>width\n");
	len_mine = ft_printf("ft_printf: [%*.*p]\n", 16, 19, p);
	len_original = printf("printf:    [%*.*p]\n", 16, 19, p);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;134m");
	printf("flag: none, *: width>precision\n");
	len_mine = ft_printf("ft_printf: [%*.*p]\n", 19, 16, p);
	len_original = printf("printf:    [%*.*p]\n", 19, 16, p);
	if (len_mine == len_original)
	{

		printf("\033[1;32m");
		printf("SUCCESS ON LEN\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("FAIL ON LEN\n");
		printf("LENGTHS: my printf: %d -- original printf: %d\n\n\n", len_mine, len_original);
		printf("\033[0m");
	}

/* -------------------------------------------------- */

	printf("\033[38;5;134m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("\033[38;5;134m");

/* -------------------------------------------------- */

	return (0);
}
