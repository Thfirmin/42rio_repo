/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 00:29:08 by fimachad          #+#    #+#             */
/*   Updated: 2021/12/11 21:15:05 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	fst_dgt;
	char	scnd_dgt;
	char	trd_dgt;

	trd_dgt = '0';
	while (trd_dgt <= '9')
	{
		scnd_dgt = '0';
		while (scnd_dgt <= '9')
		{
			if (scnd_dgt > trd_dgt)
			{
				fst_dgt = '0';
				while (fst_dgt <= '9')
				{
					if (fst_dgt > scnd_dgt)
						ft_putchar(trd_dgt, scnd_dgt, fst_dgt);
					fst_dgt++;
				}
			}
			scnd_dgt++;
		}
		trd_dgt++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
