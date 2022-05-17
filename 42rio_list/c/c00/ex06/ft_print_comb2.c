/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:56:48 by thfirmin          #+#    #+#             */
/*   Updated: 2022/03/28 15:08:44 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_decompose_number(int num1, int num2);

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = (num1 +1);
		while (num2 <= 99)
		{
			ft_decompose_number(num1, num2);
			num2 ++;
		}
		num1 ++;
	}
}

void	ft_decompose_number(int num1, int num2)
{
	char	c;

	c = ('0' + num1 / 10);
	write (1, &c, 1);
	c = ('0' + num1 % 10);
	write (1, &c, 1);
	write (1, " ", 1);
	c = ('0' + num2 / 10);
	write (1, &c, 1);
	c = ('0' + num2 % 10);
	write (1, &c, 1);
	if (num1 != 98)
	{
		write (1, ", ", 2);
	}
}
