/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftputstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:48:45 by thfirmin          #+#    #+#             */
/*   Updated: 2022/07/02 05:53:25 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_ftputstr(char *str)
{
	size_t	len;

	len = 0;
	if (str)
		while (*str)
			len += ft_ftputchr(*str++);
	else
		len += write(1, "(null)", 6);
	return (len);
}
