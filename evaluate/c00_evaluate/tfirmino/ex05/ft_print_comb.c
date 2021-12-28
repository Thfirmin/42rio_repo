/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:40:03 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/15 13:05:37 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if ((a < '7') || (b < '8') || (c < '9'))
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	digit_1;
	char	digit_2;
	char	digit_3;

	digit_1 = '0';
	while (digit_1 <= '7')
	{
		digit_2 = (digit_1 + 1);
		while (digit_2 <= '8')
		{
			digit_3 = (digit_2 + 1);
			while (digit_3 <= '9')
			{
				ft_putchar(digit_1, digit_2, digit_3);
				digit_3++;
			}
			digit_2++;
		}
		digit_1++;
	}
}

//int	main(void)
//{
//	ft_print_comb();
//}
