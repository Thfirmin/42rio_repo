/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftputunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:51:56 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/02 05:21:47 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_ftputunbr(unsigned int nb)
{
	size_t	len;

	len = 0;
	if (nb >= 10)
		len += ft_ftputnbr(nb / 10);
	len += ft_ftputchr((nb % 10) + '0');
	return (len);
}
