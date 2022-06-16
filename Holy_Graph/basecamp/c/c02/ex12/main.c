/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 03:06:11 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/14 00:47:58 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_print_addr(void *addr, char *hex);

void	*ft_print_memory(void *addr, unsigned int size)
{
	char hex[17];
	int	count;

	count = 0;
	printf ("%d, %x\n", addr, addr);
	while (count <= 16)
	{
		if (count <= 9)
			hex[count] = ('0' + count);
		else if (count < 16)
			hex[count] = ('a' + count - 10);
		else
			hex[count] = '\0';
		count ++;
	}
	ft_print_addr(addr, hex);
}

void	ft_print_addr(void *addr, char *hex)
{
	int	addres;
	char local[16];
	int	count;


	addres = addr;
	printf ("%d, %x\n", addres, addres);
	count = 15;
	while ((addres != 0) && (count > 0))
	{
		local[count] = hex[(addres % 16)];
		addres = (addres / 16);
		count --;
	}
	count = 0;
	while (local[count] != '\0')
	{
		ft_putchar(local[count]);
		count ++;
	}
	ft_putchar(':');
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(void)
{
	char c[] = "ola";
	printf ("%d, %x\n", &c, &c);
	ft_print_memory(c, sizeof(c));
	return (0);
}
