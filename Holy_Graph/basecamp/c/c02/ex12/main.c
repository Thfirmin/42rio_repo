/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 03:06:11 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/19 02:16:38 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	*str;
	char c[] = "Ola aqui e\no thiago\t fimin dos daas";
	str = ft_print_memory(c, sizeof(c));
	printf ("%s\n", str);
	return (0);
}
