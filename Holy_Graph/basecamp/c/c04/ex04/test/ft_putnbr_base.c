/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 01:15:15 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/07 21:00:24 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	putnbr_base_engine(char *base, unsigned long long int nnbr, int nbs);

int		ft_validation_base(char *base, unsigned int *nbs);

void	ft_putnbr_base(long long int nbr, char *base)
{
	unsigned int		nbs;
	unsigned long long int	nnbr;

	nbs = 0;
	if (ft_validation_base(base, &nbs) < 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nnbr = (nbr * -1);
	}
	else
	{
		nnbr = nbr;
	}
	putnbr_base_engine(base, nnbr, nbs);
}

int	ft_validation_base(char *base, unsigned int *nbs)
{
	int	aux;

	while (base[*nbs] != '\0')
	{
		aux = (*nbs + 1);
		while (base[aux] != '\0')
		{
			if (base[*nbs] == base[aux])
				return (-1);
			if (base[*nbs] == '+' || base[*nbs] == '-')
				return (-1);
			aux ++;
		}
		*nbs = *nbs +1;
	}
	if (*nbs < 2)
		return (-1);
	else
		return (1);
}

void	putnbr_base_engine(char *base, unsigned long long int nnbr, int nbs)
{
	int	mod;

	if (nnbr != 0)
	{
		mod = (nnbr % nbs);
		putnbr_base_engine(base, (nnbr / nbs), nbs);
	}
	if (nnbr != 0)
		ft_putchar(base[mod]);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
