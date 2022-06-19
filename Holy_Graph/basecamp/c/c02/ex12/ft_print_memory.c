/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 03:06:51 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/19 02:15:37 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

char	*ft_print_content(char *str);

void	ft_print_hexstr(char *str, char *hex);

void	ft_print_addr(void *addr, char *hex);

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*str;
	char	hex[17];
	int		aux;

	aux = 0;
	while (aux < 16)
	{
		if (aux < 10)
			hex[aux] = ('0' + aux);
		else
			hex[aux] = ('a' + (aux - 10));
		aux ++;
	}
	hex[aux] = '\0';
	str = addr;
	if (!size)
		return (addr);
	while (*str)
	{
		ft_print_addr(str, hex);
		ft_print_hexstr(str, hex);
		str = ft_print_content(str);
		ft_putstr("\n");
	}
	return (addr);
}

void	ft_print_addr(void *addr, char *hex)
{
	char					address[16];
	long long unsigned int	index;
	int						aux;

	index = (long long unsigned int) addr;
	aux = 14;
	address[15] = '\0';
	while (aux >= 0)
	{
		address[aux] = hex[(index % 16)];
		if (index != 0)
			index = (index / 16);
		aux --;
	}
	ft_putstr(address);
	ft_putstr(":");
}

void	ft_print_hexstr(char *str, char *hex)
{
	char	ret[42];
	int		index;

	index = 0;
	while (index < 41)
	{
		if ((*str != '\0') && (index % 5 != 0))
		{
			ret[index] = hex[((*str / 16) % 16)];
			ret[(index + 1)] = hex[(*str % 16)];
			index ++;
			str ++;
		}
		else
			ret[index] = ' ';
		index ++;
	}
	ret[index] = '\0';
	ft_putstr(ret);
}

char	*ft_print_content(char *str)
{
	char	content[17];
	int		aux;

	aux = 0;
	while (*str != '\0' && aux < 16)
	{
		if (*str >= 32 && *str <= 126)
			content[aux] = *str;
		else
			content[aux] = '.';
		str ++;
		aux ++;
	}
	content[aux] = '\0';
	ft_putstr(content);
	return (str);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str++, 1);
	}
}
