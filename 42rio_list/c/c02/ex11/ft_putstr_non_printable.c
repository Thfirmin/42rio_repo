/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 02:30:41 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/10 02:58:14 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

void	ft_putchar(char c);

void	ft_putstr_non_printable(char *str)
{
	int		count;
	int		mod;
	char	hex[17];

	count = 0;
	ft_strcpy(hex, "0123456789abcdef");
	while (str[count] != '\0')
	{
		if (str[count] >= 32 && str[count] <= 126)
		{
			ft_putchar(str[count]);
		}
		else
		{
			ft_putchar('\\');
			mod = ((str[count] / 16) % 16);
			ft_putchar(hex[mod]);
			mod = (str[count] % 16);
			ft_putchar(hex[mod]);
		}
		count ++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	aux;

	aux = 0;
	while (src[aux] != '\0')
	{
		dest[aux] = src[aux];
		aux ++;
	}
	dest[aux] = '\0';
	return (dest);
}
