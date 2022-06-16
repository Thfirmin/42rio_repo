/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:02:18 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/08 01:37:19 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_convert(char *str, char *base, int count, int nbs);

int		sqr(int n1, int n2);

void	ft_str_filter(char *str, char *base, int *count, int nbs);

int		ft_validation_base(char *base, int *nbs);

int	ft_atoi_base(char *str, char *base)
{
	int	nbs;
	int	signal;
	int	count;
	int	num;

	signal = 1;
	count = 0;
	num = 0;
	if (ft_validation_base(base, &nbs) < 0)
		return (0);
	while (str[count] == '+' || str[count] == '-' || str[count] == ' ')
	{
		if (str[count] == '-')
			signal = (signal * -1);
		count ++;
	}
	ft_str_filter(str, base, &count, nbs);
	num = (ft_convert(str, base, count, nbs));
	num = (num * signal);
	return (num);
}

int	ft_validation_base(char *base, int *nbs)
{
	int	aux;

	while (base[*nbs] != '\0')
	{
		aux = (*nbs + 1);
		while (base[aux] != '\0')
		{
			if (base[*nbs] == base[aux])
				return (-1);
			if (base[*nbs] == '+' || base[*nbs] == '-')
				return (-1);
			aux ++;
		}
		*nbs = *nbs +1;
	}
	if (*nbs < 2)
		return (-1);
	else
		return (1);
}

void	ft_str_filter(char *str, char *base, int *count, int nbs)
{
	int	aux;
	int	mem;

	aux = 0;
	mem = 0;
	while (str[*count] != '\0')
	{
		while (aux < nbs)
		{
			if (str[*count] == base[aux])
			{
				str[mem] = str[*count];
				mem ++;
				*count = (*count + 1);
				aux = -1;
			}
			aux ++;
		}
		str[mem] = '\0';
		*count = mem;
	}
}

int	sqr(int n1, int n2)
{
	int	num;

	num = n1;
	if (n2 == 0)
		return (1);
	while (n2 > 1)
	{
		num = (num * n1);
		n2 --;
	}
	return (num);
}

int	ft_convert(char *str, char *base, int count, int nbs)
{
	int	num;
	int	len;
	int	aux;

	num = 0;
	len = 0;
	aux = 0;
	count --;
	while (len <= count)
	{
		if (str[len] == base[aux])
		{
			num = num + (aux * (sqr(nbs, (count - len))));
			aux = -1;
			len ++;
		}
		aux ++;
	}
	return (num);
}
