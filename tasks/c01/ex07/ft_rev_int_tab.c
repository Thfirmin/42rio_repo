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
#include <stdio.h>

//void ft_rev_int_tab(int *tab, int size)
//{
//	int x;
//	int u;
//	x = 0;
//	size --;
//	while (x < size)
//	{
//		u = tab[x];
//		tab[x] = tab[size];
//		tab[size] = u;
//		x++;
//		size--;
//	}
//}

int	main(void)
{
	int	x;
	x = 0;
	int	size;
	size = 5;
	int	test[5];
	test[0] = 2;
	test[1] = 2;
	test[2] = 2;
	test[2] = 2;
	test[3] = 2;
	test[4] = 2;
	test[5] = 2;
	test[6] = 3;
	while (x <= 10)
	{
		printf("x= %d valor= %d\n ",x,  test[x]);
		x++;
	}
	x = 0;
//	ft_rev_int_tab(test, size);
//	while (x <= size)
//	{
//		printf("%d\n", test[x]);
//		x++;
//	}
}
