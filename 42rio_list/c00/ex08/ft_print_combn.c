/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:41:41 by tfirmino          #+#    #+#             */
/*   Updated: 2022/01/07 16:41:41 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnum(char *num, int n);

void	ft_print_combn(int n)
{
	int	count;
	char	num[n];

	n--;
	count = 0;
	num[count] = ('0' - 1);
	while ((num[0]) <= ('9' - n) && (n >= 0 && n <= 8))
	{
		num[count]++;
		while ((num[count]) <= ('9' - (n - count)))
		{
			if (count < n)
			{
				num[count + 1] = (num[count] + 1);
				count++;
			}
			else
			{
				ft_putnum(num, n);
				num[count]++;
			}
		}
		count --;
	}
}

void	ft_putnum(char *num, int n)
{
	int	count;

	count = 0;
	while (count <= n)
	{
		write (1, &num[count], 1);
		count++;
	}
	if ((num[0] < '9' - n))
	{
		write (1, ", ", 2);
	}
}
