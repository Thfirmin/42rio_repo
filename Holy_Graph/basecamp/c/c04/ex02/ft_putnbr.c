/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:11:42 by thfirmin          #+#    #+#             */
/*   Updated: 2022/03/29 10:58:07 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		nb = (nb * -1);
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
	}
	if (nb >= 0)
		ft_putchar ('0' + (nb % 10));
	else
		ft_putchar ('0' - (nb % 10));
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
