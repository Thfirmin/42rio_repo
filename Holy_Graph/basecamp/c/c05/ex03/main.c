/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:48:19 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/20 14:05:39 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power);

int	main(void)
{
	int	i[] = {-2, -1, 0, 1, 2, 3, 4};
	int	p[] = {0, 1, 2, 3, 4};

	for (int j = 0; j < 5; j++)
	{
		for (int h = 0; h < 7; h++)
		{
			printf ("%d ^ %d = %d", i[h], p[j], ft_recursive_power(i[h], p[j]));
			printf ("\n");
		}
	}
}
