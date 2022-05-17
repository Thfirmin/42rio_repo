/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dameneze <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 04:59:46 by dameneze          #+#    #+#             */
/*   Updated: 2021/12/15 23:49:57 by dameneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex_chars;

	hex_chars = "0123456789abcdef";
	while (*str != '\0')
	{
		if (0 <= *str && *str <= 31)
		{
			ft_putchar(92);
			ft_putchar(hex_chars[*str / 16]);
			ft_putchar(hex_chars[*str % 16]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
