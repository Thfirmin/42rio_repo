/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <michelkgs1@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 02:40:28 by microdri          #+#    #+#             */
/*   Updated: 2021/12/16 04:33:37 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{	
		ft_putchar(*str);
		str++;
	}	
}

int main ()
{
 	char *str = "Eu vou ir subir-pra-cima\n";
 	ft_putstr(str);
}
