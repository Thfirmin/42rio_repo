/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-da <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 00:05:18 by llima-da          #+#    #+#             */
/*   Updated: 2021/12/15 19:23:57 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nbr, char *base, int size)
{
	unsigned int	n;
	char			a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		ft_putnbr(n / size, base, size);
	a = base[n % size];
	write(1, &a, 1);
}

int	verify_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		b;

	b = 0;
	if (verify_base(base) == 1)
	{
		while (base[b] != '\0')
		{
			b++;
		}
		ft_putnbr(nbr, base, b);
	}
}

  int main(void)
{
	int nbr;
	char base[] = "012";

	nbr = 6;
	
	ft_putnbr_base(nbr, base);
}
