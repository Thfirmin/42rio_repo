/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:52:27 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/02 05:21:30 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_ftputnbr(int nb)
{
	size_t			len;
	unsigned int	nbr;

	len = 0;
	if (nb < 0)
	{
		len += ft_ftputchr('-');
		nbr = (nb * -1);
	}
	else
		nbr = nb;
	if (nbr >= 10)
		len += ft_ftputnbr(nbr / 10);
	len += ft_ftputchr((nbr % 10) + '0');
	return (len);
}
