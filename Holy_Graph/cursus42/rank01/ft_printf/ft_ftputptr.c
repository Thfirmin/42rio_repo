/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftputptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:52:11 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/02 05:21:37 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_ftputptr(void *ptr)
{
	unsigned long int	len;
	unsigned long int	nb;

	len = 0;
	nb = (unsigned long int) ptr;
	if (nb < 16)
		len += ft_ftputstr("0x");
	if (nb >= 16)
		len += ft_ftputptr((void *)(nb / 16));
	if (nb % 16 >= 10)
		len += ft_ftputchr(((nb % 16) - 10) + 'a');
	else
		len += ft_ftputchr((nb % 16) + '0');
	return (len);
}
