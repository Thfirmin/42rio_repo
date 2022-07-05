/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftputhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:52:44 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/02 06:17:16 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_ftputhex(unsigned int nb, char plcholder)
{
	size_t			len;
	int				capital;

	len = 0;
	capital = 0;
	if (plcholder == 'x')
		capital = 32;
	if (nb >= 16)
		len += ft_ftputhex((nb / 16), plcholder);
	if (nb % 16 >= 10)
		len = len + ft_ftputchr(((nb % 16) - 10) + ('A' + capital));
	else
		len += ft_ftputchr((nb % 16) + '0');
	return (len);
}
