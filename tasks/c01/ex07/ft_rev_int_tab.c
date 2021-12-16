/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:38:08 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/15 12:38:34 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	u;

	x = 0;
	while (x < size)
	{
		u = tab[x];
		tab[x] = tab[size];
		tab[size] = u;
		x++;
		size--;
	}
}

/*int	main(void)
{
	int	x;
	int	size;

	size = 6;
	int	test[size];

	x = 0;
	test[0] = 2;
	test[1] = 3;
	test[2] = 4;
	test[3] = 5;
	test[4] = 6;
	test[5] = 7;

	ft_rev_int_tab(test, size);
	while (x <= size)
	{
		printf("x= %d valor= %d\n",x, test[x]);
		x++;
	}
}*/
