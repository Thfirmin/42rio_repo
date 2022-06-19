/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:18:19 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/18 20:57:51 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putdigits(int n, int *digit);

void	ft_print_combn(int n)
{
	int	digit[9];
	int	arrow;

	digit[0] = 0;
	arrow = 0;
	n --;
	while ((digit[0] <= (9 - n)) && (n >= 0 && n <= 8))
	{
			while (digit[arrow] <= ((9 - n) + arrow))
			{
				if (n > 0)
				{
					arrow ++;
					digit[arrow] = digit[arrow - 1] + 1;
				}
				while (arrow == n && digit[arrow] <= 9)
				{
					ft_putdigits(n, digit);
					digit[arrow] ++;
				}
			}
		arrow --;
		digit[arrow] ++;
	}
}

void	ft_putdigits(int n, int *digit)
{
	int		count;
	char	c;

	count = 0;
	while (count <= n)
	{
		c = ('0' + digit[count]);
		write (1, &c, 1);
		count ++;
	}
	if (digit[0] != (9 - n))
	{
		write (1, ", ", 2);
	}
}
