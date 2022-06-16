/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:44:34 by thfirmin          #+#    #+#             */
/*   Updated: 2022/03/28 14:55:20 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putdigits(char c1, char c2, char c3);

void	ft_print_comb(void)
{
	char	digit1;
	char	digit2;
	char	digit3;

	digit1 = '0';
	while (digit1 <= '7')
	{
		digit2 = (digit1 + 1);
		while (digit2 <= '8')
		{
			digit3 = (digit2 + 1);
			while (digit3 <= '9')
			{
				ft_putdigits(digit1, digit2, digit3);
				digit3 ++;
			}
			digit2 ++;
		}
		digit1 ++;
	}
}

void	ft_putdigits(char c1, char c2, char c3)
{
	write (1, &c1, 1);
	write (1, &c2, 1);
	write (1, &c3, 1);
	if (c1 != '7')
	{
		write (1, ", ", 2);
	}
}
