/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:38:36 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/20 11:48:02 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nbr;

	if (nb < 0)
		return (0);
	else if (power == 0)
		return (1);
	nbr = nb;
	while (power > 1)
	{
		nbr *= nb;
		power--;
	}
	return (nbr);
}
