/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 23:52:39 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/19 03:20:01 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	atoinum;
	int	signal;
	int	count;

	count = 0;
	signal = 1;
	atoinum = 0;
	while (str[count] != '\0')
	{
		while (str[count] == '+' || str[count] == '-' || str[count] == ' ')
		{
			if (str[count] == '-')
				signal = (signal * -1);
			count ++;
		}
		while (str[count] >= '0' && str[count] <= '9')
		{
			atoinum = (atoinum * 10);
			atoinum = (atoinum + (str[count] - 48));
			count ++;
		}
		break ;
	}
	atoinum = (atoinum * signal);
	return (atoinum);
}
