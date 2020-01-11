/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/04 21:27:03 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/08 23:17:31 by nben-ezr      ########   odam.nl         */
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


/* ----------------------------------------------------------------- */

	printf("\033[0;33m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("test:\n---------------------\n");
	printf("\033[0m");


/* ----------------------------------------------------------------- */

	printf("\033[0;33m");
	len_mine = ft_printf("ft_printf: %05");
	len_original = printf("printf: %05") + 3;
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
	len_mine = ft_printf("ft_printf: %d%%fd\n", d);
	len_original = printf("printf: %d%%fd\n", d) + 3;
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

	len_mine = ft_printf("\033[0;33mft_printf: %c%%%dsahu%5.2dja%d%d\n", c, d, d, d, d);
	len_original = printf("\033[0;33mprintf: %c%%%dsahu%5.2dja%d%d\n", c, d, d, d, d) + 3;
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
	len_mine = ft_printf("ft_printf: %c\n", c);
	len_original = printf("printf: %c\n", c) + 3;
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

	printf("\033[0;31m");
	printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
	printf("integers:\n---------------------\n");
	printf("\033[0m");

/* ----------------------------------------------------------------- */

	printf("\033[0;31m");
	printf("flag: none, normal:\n");
	len_mine = ft_printf("ft_printf: %d\n", d);
	len_original = printf("printf: %d\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %9d\n", d);
	len_original = printf("printf: %9d\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %.9d\n", d);
	len_original = printf("printf: %.9d\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %9.8d\n", d);
	len_original = printf("printf: %9.8d\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %8.9d\n", d);
	len_original = printf("printf: %8.9d\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %*d\n", 9, d);
	len_original = printf("printf: %*d\n", 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %.*d\n", 9, d);
	len_original = printf("printf: %.*d\n", 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %*.*d\n", 8, 9, d);
	len_original = printf("printf: %*.*d\n", 8, 9, d) + 3;
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
	printf("flag: -, normal:\n");
	len_mine = ft_printf("ft_printf: %-d|\n", d);
	len_original = printf("printf: %-d|\n", d) + 3;
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
	printf("flag: -, width > len int\n");
	len_mine = ft_printf("ft_printf: %-9d|\n", d);
	len_original = printf("printf: %-9d|\n", d) + 3;
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
	printf("flag: -, precision > len int\n");
	len_mine = ft_printf("ft_printf: %-.9d|\n", d);
	len_original = printf("printf: %-.9d|\n", d) + 3;
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
	printf("flag: -, width > precision\n");
	len_mine = ft_printf("ft_printf: %-9.8d|\n", d);
	len_original = printf("printf: %-9.8d|\n", d) + 3;
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
	printf("flag: -, precision > width\n");
	len_mine = ft_printf("ft_printf: %-8.9d|\n", d);
	len_original = printf("printf: %-8.9d|\n", d) + 3;
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
	printf("flag: -, *: width\n");
	len_mine = ft_printf("ft_printf: %-*d|\n", 9, d);
	len_original = printf("printf: %-*d|\n", 9, d) + 3;
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
	printf("flag: -, *: precision\n");
	len_mine = ft_printf("ft_printf: %-.*d|\n", 9, d);
	len_original = printf("printf: %-.*d|\n", 9, d) + 3;
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
	printf("flag: -, *: width+precision\n");
	len_mine = ft_printf("ft_printf: %-*.*d|\n", 8, 9, d);
	len_original = printf("printf: %-*.*d|\n", 8, 9, d) + 3;
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
	printf("flag: 0, normal:\n");
	len_mine = ft_printf("ft_printf: %0d\n", d);
	len_original = printf("printf: %0d\n", d) + 3;
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
	printf("flag: 0, width > len int\n");
	len_mine = ft_printf("ft_printf: %09d\n", d);
	len_original = printf("printf: %09d\n", d) + 3;
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
	printf("flag: 0, precision > len int\n");
	len_mine = ft_printf("ft_printf: %0.9d\n", d);
	len_original = printf("printf: %0.9d\n", d) + 3;
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
	printf("flag: 0, width > precision\n");
	len_mine = ft_printf("ft_printf: %09.8d\n", d);
	len_original = printf("printf: %09.8d\n", d) + 3;
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
	printf("flag: 0, precision > width\n");
	len_mine = ft_printf("ft_printf: %08.9d\n", d);
	len_original = printf("printf: %08.9d\n", d) + 3;
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
	printf("flag: 0, *: width\n");
	len_mine = ft_printf("ft_printf: %0*d\n", 9, d);
	len_original = printf("printf: %0*d\n", 9, d) + 3;
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
	printf("flag: 0, *: precision\n");
	len_mine = ft_printf("ft_printf: %0.*d\n", 9, d);
	len_original = printf("printf: %0.*d\n", 9, d) + 3;
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
	printf("flag: 0, *: width+precision\n");
	len_mine = ft_printf("ft_printf: %0*.*d\n", 8, 9, d);
	len_original = printf("printf: %0*.*d\n", 8, 9, d) + 3;
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
	printf("flag: none, negative input:\n");
	len_mine = ft_printf("ft_printf: %d\n", -d);
	len_original = printf("printf: %d\n", -d) + 3;
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
	len_mine = ft_printf("ft_printf: %9d\n", -d);
	len_original = printf("printf: %9d\n", -d) + 3;
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
	len_mine = ft_printf("ft_printf: %.9d\n", -d);
	len_original = printf("printf: %.9d\n", -d) + 3;
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
	len_mine = ft_printf("ft_printf: %9.8d\n", -d);
	len_original = printf("printf: %9.8d\n", -d) + 3;
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
	len_mine = ft_printf("ft_printf: %8.9d\n", -d);
	len_original = printf("printf: %8.9d\n", -d) + 3;
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
	len_mine = ft_printf("ft_printf: %*d\n", 9, -d);
	len_original = printf("printf: %*d\n", 9, -d) + 3;
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
	len_mine = ft_printf("ft_printf: %.*d\n", 9, -d);
	len_original = printf("printf: %.*d\n", 9, -d) + 3;
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
	len_mine = ft_printf("ft_printf: %*.*d\n", 8, 9, -d);
	len_original = printf("printf: %*.*d\n", 8, 9, -d) + 3;
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
	printf("flag: -, negative input:\n");
	len_mine = ft_printf("ft_printf: %-d|\n", -d);
	len_original = printf("printf: %-d|\n", -d) + 3;
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
	printf("flag: -, width > len int, negative input\n");
	len_mine = ft_printf("ft_printf: %-9d|\n", -d);
	len_original = printf("printf: %-9d|\n", -d) + 3;
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
	printf("flag: -, precision > len int, negative input\n");
	len_mine = ft_printf("ft_printf: %-.9d|\n", -d);
	len_original = printf("printf: %-.9d|\n", -d) + 3;
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
	printf("flag: -, width > precision, negative input\n");
	len_mine = ft_printf("ft_printf: %-9.8d|\n", -d);
	len_original = printf("printf: %-9.8d|\n", -d) + 3;
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
	printf("flag: -, precision > width, negative input\n");
	len_mine = ft_printf("ft_printf: %-8.9d|\n", -d);
	len_original = printf("printf: %-8.9d|\n", -d) + 3;
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
	printf("flag: -, *: width, negative input\n");
	len_mine = ft_printf("ft_printf: %-*d|\n", 9, -d);
	len_original = printf("printf: %-*d|\n", 9, -d) + 3;
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
	printf("flag: -, *: precision, negative input\n");
	len_mine = ft_printf("ft_printf: %-.*d|\n", 9, -d);
	len_original = printf("printf: %-.*d|\n", 9, -d) + 3;
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
	printf("flag: -, *: width+precision, negative input\n");
	len_mine = ft_printf("ft_printf: %-*.*d|\n", 8, 9, -d);
	len_original = printf("printf: %-*.*d|\n", 8, 9, -d) + 3;
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
	printf("flag: 0, negative input:\n");
	len_mine = ft_printf("ft_printf: %0d\n", -d);
	len_original = printf("printf: %0d\n", -d) + 3;
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
	printf("flag: 0, width > len int, negative input\n");
	len_mine = ft_printf("ft_printf: %09d\n", -d);
	len_original = printf("printf: %09d\n", -d) + 3;
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
	printf("flag: 0, precision > len int, negative input\n");
	len_mine = ft_printf("ft_printf: %0.9d\n", -d);
	len_original = printf("printf: %0.9d\n", -d) + 3;
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
	printf("flag: 0, width > precision, negative input\n");
	len_mine = ft_printf("ft_printf: %09.8d\n", -d);
	len_original = printf("printf: %09.8d\n", -d) + 3;
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
	printf("flag: 0, precision > width, negative input\n");
	len_mine = ft_printf("ft_printf: %08.9d\n", -d);
	len_original = printf("printf: %08.9d\n", -d) + 3;
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
	printf("flag: 0, *: width, negative input\n");
	len_mine = ft_printf("ft_printf: %0*d\n", 9, -d);
	len_original = printf("printf: %0*d\n", 9, -d) + 3;
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
	printf("flag: 0, *: precision, negative input\n");
	len_mine = ft_printf("ft_printf: %0.*d\n", 9, -d);
	len_original = printf("printf: %0.*d\n", 9, -d) + 3;
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
	printf("flag: 0, *: width+precision, negative input\n");
	len_mine = ft_printf("ft_printf: %0*.*d\n", 8, 9, -d);
	len_original = printf("printf: %0*.*d\n", 8, 9, -d) + 3;
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
	len_mine = ft_printf("ft_printf: %u\n", 5000);
	len_original = printf("printf: %u\n", 5000) + 3;
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
	len_mine = ft_printf("ft_printf: %u\n", -5000);
	len_original = printf("printf: %u\n", -5000) + 3;
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
	printf("negative, flags and width:\n");
	len_mine = ft_printf("ft_printf: %-8u\n", -5000);
	len_original = printf("printf: %-8u\n", -5000) + 3;
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
	len_mine = ft_printf("ft_printf: %s\n", s);
	len_original = printf("printf: %s\n", s) + 3;
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
	len_mine = ft_printf("ft_printf: %9s\n", s);
	len_original = printf("printf: %9s\n", s) + 3;
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
	len_mine = ft_printf("ft_printf: %.9s\n", s);
	len_original = printf("printf: %.9s\n", s) + 3;
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
	len_mine = ft_printf("ft_printf: %9.8s\n", s);
	len_original = printf("printf: %9.8s\n", s) + 3;
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
	len_mine = ft_printf("ft_printf: %8.9s\n", s);
	len_original = printf("printf: %8.9s\n", s) + 3;
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
	len_mine = ft_printf("ft_printf: %*s\n", 9, s);
	len_original = printf("printf: %*s\n", 9, s) + 3;
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
	len_mine = ft_printf("ft_printf: %.*s\n", 9, s);
	len_original = printf("printf: %.*s\n", 9, s) + 3;
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
	len_mine = ft_printf("ft_printf: %*.*s\n", 8, 9, s);
	len_original = printf("printf: %*.*s\n", 8, 9, s) + 3;
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
	len_mine = ft_printf("ft_printf: %-s|\n", s);
	len_original = printf("printf: %-s|\n", s) + 3;
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
	len_mine = ft_printf("ft_printf: %-9s|\n", s);
	len_original = printf("printf: %-9s|\n", s) + 3;
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
	len_mine = ft_printf("ft_printf: %-.9s|\n", s);
	len_original = printf("printf: %-.9s|\n", s) + 3;
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
	len_mine = ft_printf("ft_printf: %-9.8s|\n", s);
	len_original = printf("printf: %-9.8s|\n", s) + 3;
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
	len_mine = ft_printf("ft_printf: %-8.9s|\n", s);
	len_original = printf("printf: %-8.9s|\n", s) + 3;
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
	len_mine = ft_printf("ft_printf: %-*s|\n", 9, s);
	len_original = printf("printf: %-*s|\n", 9, s) + 3;
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
	len_mine = ft_printf("ft_printf: %-.*s|\n", 9, s);
	len_original = printf("printf: %-.*s|\n", 9, s) + 3;
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
	len_mine = ft_printf("ft_printf: %-*.*s|\n", 8, 9, s);
	len_original = printf("printf: %-*.*s|\n", 8, 9, s) + 3;
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
	len_mine = ft_printf("ft_printf: %x\n", d);
	len_original = printf("printf: %x\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %9x\n", d);
	len_original = printf("printf: %9x\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %.9x\n", d);
	len_original = printf("printf: %.9x\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %9.8x\n", d);
	len_original = printf("printf: %9.8x\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %8.9x\n", d);
	len_original = printf("printf: %8.9x\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %*x\n", 9, d);
	len_original = printf("printf: %*x\n", 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %.*x\n", 9, d);
	len_original = printf("printf: %.*x\n", 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %*.*x\n", 8, 9, d);
	len_original = printf("printf: %*.*x\n", 8, 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %-x|\n", d);
	len_original = printf("printf: %-x|\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %-9x|\n", d);
	len_original = printf("printf: %-9x|\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %-.9x|\n", d);
	len_original = printf("printf: %-.9x|\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %-9.8x|\n", d);
	len_original = printf("printf: %-9.8x|\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %-8.9x|\n", d);
	len_original = printf("printf: %-8.9x|\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %-*x|\n", 9, d);
	len_original = printf("printf: %-*x|\n", 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %-.*x|\n", 9, d);
	len_original = printf("printf: %-.*x|\n", 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %-*.*x|\n", 8, 9, d);
	len_original = printf("printf: %-*.*x|\n", 8, 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %0x\n", d);
	len_original = printf("printf: %0x\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %09x\n", d);
	len_original = printf("printf: %09x\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %0.9x\n", d);
	len_original = printf("printf: %0.9x\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %09.8x\n", d);
	len_original = printf("printf: %09.8x\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %08.9x\n", d);
	len_original = printf("printf: %08.9x\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %0*x\n", 9, d);
	len_original = printf("printf: %0*x\n", 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %0.*x\n", 9, d);
	len_original = printf("printf: %0.*x\n", 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %0*.*x\n", 8, 9, d);
	len_original = printf("printf: %0*.*x\n", 8, 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %X\n", d);
	len_original = printf("printf: %X\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %9X\n", d);
	len_original = printf("printf: %9X\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %.9X\n", d);
	len_original = printf("printf: %.9X\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %9.8X\n", d);
	len_original = printf("printf: %9.8X\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %8.9X\n", d);
	len_original = printf("printf: %8.9X\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %*X\n", 9, d);
	len_original = printf("printf: %*X\n", 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %.*X\n", 9, d);
	len_original = printf("printf: %.*X\n", 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %*.*X\n", 8, 9, d);
	len_original = printf("printf: %*.*X\n", 8, 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %-X|\n", d);
	len_original = printf("printf: %-X|\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %-9X|\n", d);
	len_original = printf("printf: %-9X|\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %-.9X|\n", d);
	len_original = printf("printf: %-.9X|\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %-9.8X|\n", d);
	len_original = printf("printf: %-9.8X|\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %-8.9X|\n", d);
	len_original = printf("printf: %-8.9X|\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %-*X|\n", 9, d);
	len_original = printf("printf: %-*X|\n", 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %-.*X|\n", 9, d);
	len_original = printf("printf: %-.*X|\n", 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %-*.*X|\n", 8, 9, d);
	len_original = printf("printf: %-*.*X|\n", 8, 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %0X\n", d);
	len_original = printf("printf: %0X\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %09X\n", d);
	len_original = printf("printf: %09X\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %0.9X\n", d);
	len_original = printf("printf: %0.9X\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %09.8X\n", d);
	len_original = printf("printf: %09.8X\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %08.9X\n", d);
	len_original = printf("printf: %08.9X\n", d) + 3;
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
	len_mine = ft_printf("ft_printf: %0*X\n", 9, d);
	len_original = printf("printf: %0*X\n", 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %0.*X\n", 9, d);
	len_original = printf("printf: %0.*X\n", 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %0*.*X\n", 8, 9, d);
	len_original = printf("printf: %0*.*X\n", 8, 9, d) + 3;
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
	len_mine = ft_printf("ft_printf: %p\n", p);
	len_original = printf("printf: %p\n", p) + 3;
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
	len_mine = ft_printf("ft_printf: %20p\n", p);
	len_original = printf("printf: %20p\n", p) + 3;
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
	len_mine = ft_printf("ft_printf: %*p\n", 20, p);
	len_original = printf("printf: %*p\n", 20, p) + 3;
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
	len_mine = ft_printf("ft_printf: %-p|\n", p);
	len_original = printf("printf: %-p|\n", p) + 3;
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
	len_mine = ft_printf("ft_printf: %-20p|\n", p);
	len_original = printf("printf: %-20p|\n", p) + 3;
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
	len_mine = ft_printf("ft_printf: %-*p|\n", 20, p);
	len_original = printf("printf: %-*p|\n", 20, p) + 3;
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
	len_mine = ft_printf("ft_printf: |%.*p|\n", 13, p);
	len_original = printf("printf: |%.*p|\n", 13, p) + 3;
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
	len_mine = ft_printf("ft_printf: |%*p|\n", 14, p);
	len_original = printf("printf: |%*p|\n", 14, p) + 3;
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
	len_mine = ft_printf("ft_printf: |%*.*p|\n", 7, 16, p);
	len_original = printf("printf: |%*.*p|\n", 7, 16, p) + 3;
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
	len_mine = ft_printf("ft_printf: |%*.*p|\n", 16, 7, p);
	len_original = printf("printf: |%*.*p|\n", 16, 7, p) + 3;
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
	len_mine = ft_printf("ft_printf: |%*.*p|\n", 16, 19, p);
	len_original = printf("printf: |%*.*p|\n", 16, 19, p) + 3;
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
	len_mine = ft_printf("ft_printf: |%*.*p|\n", 19, 16, p);
	len_original = printf("printf: |%*.*p|\n", 19, 16, p) + 3;
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



/* -------------------------------------------------- */
	
/*	ft_printf("\033[0;35m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[1;35m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[0;36m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[1;36m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[0;37m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[1;37m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[0;38m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[1;38m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[0;39m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[1;39m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[0;40m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[1;40m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[0;41m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[1;41m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[0;42m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[1;42m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[0;43m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[1;43m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");


	ft_printf("\033[0;44m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");

	ft_printf("\033[1;44m");
	ft_printf("", );
	printf("", );
	ft_printf("\033[0m");
	*/
	return (0);
}

/*Test(ints, ft_printf)
{
	char *str;

	str1 = printf("");
	str2 = 
    cr_expect(strcmp(str1, str2), "failed");
	str = "He\0llo";
    cr_expect_(ft_printf(str), sprintf(str), "failed");
	str = "Heøllo";
    cr_expect_(ft_printf(str), sprintf(str), "failed");
	str = "";
    cr_expect_(ft_printf(str), sprintf(str), "failed");
	free(str);
}*/
