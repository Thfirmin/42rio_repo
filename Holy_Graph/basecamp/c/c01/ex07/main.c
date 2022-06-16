/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:52:40 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 00:22:25 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_tab(int argc, int *argv);

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[7];
	int	n;

	tab[0] = 0;
	tab[1] = 2;
	tab[2] = 4;
	tab[3] = 0;
	tab[4] = 2;
	tab[5] = 4;
	tab[6] = 0;
	n = 7;
	ft_print_tab(n, tab);
	ft_rev_int_tab(tab, n);
	ft_print_tab(n, tab);
	return (0);
}

void	ft_print_tab(int argc, int *argv)
{
	int	count;

	count = 0;
	while (count < argc)
	{
		printf("%d", argv[count]);
		if (count != argc)
		{
			printf (", ");
		}
		count ++;
	}
	printf ("\n");
}
