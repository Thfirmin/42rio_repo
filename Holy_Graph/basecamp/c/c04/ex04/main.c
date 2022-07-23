/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 01:13:43 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/22 23:54:08 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	char	base[42];

	strcpy (base, "01234567");
	ft_putnbr_base(32, base);
	return (0);
}
