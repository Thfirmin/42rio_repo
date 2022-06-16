/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:52:40 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 00:19:37 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_tab(int argc, int *argv);

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[7];
	int	n;

	tab[0] = 9;
	tab[1] = 21;
	tab[2] = 4;
	tab[3] = 7;
	tab[4] = 42;
	tab[5] = 5;
	tab[6] = 0;
	n = 7;
	ft_print_tab(n, tab);
	ft_sort_int_tab(tab, n);
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
