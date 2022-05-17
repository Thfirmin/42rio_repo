/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 23:26:52 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/21 23:27:27 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_address(void *str)
{
	char		address[16];
	int			aux;
	long long	index;

	index = (long long) str;
	aux = 14;
	address[15] = '\0';
	while (aux >= 0)
	{
		if (index % 16 < 10)
			address[aux] = ('0' + (index % 16));
		else if (index % 16 >= 10)
			address[aux] = ('a' + (index % 16) - 10);
		if (index != 0)
			index = (index / 16);
		aux --;
	}
	aux = 0;
	while (address[aux] != '\0')
	{
		ft_putchar(address[aux]);
		aux ++;
	}
	ft_putchar(':');
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
