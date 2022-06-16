/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:10:54 by thfirmin          #+#    #+#             */
/*   Updated: 2022/03/29 10:55:32 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(2147483647);
	write (1, "\n", 1);
	ft_putnbr(42);
	write (1, "\n", 1);
	ft_putnbr(4);
	write (1, "\n", 1);
	ft_putnbr(0);
	write (1, "\n", 1);
	ft_putnbr(-2);
	write (1, "\n", 1);
	ft_putnbr(-42);
	write (1, "\n", 1);
	ft_putnbr(-2147483648);
	return (0);
}
