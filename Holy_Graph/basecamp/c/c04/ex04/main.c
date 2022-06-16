/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 01:13:43 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/07 21:00:31 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	char	base[42];

	strcpy (base, "0123456789abcdef");
	ft_putnbr_base(180, base);
	return (0);
}
