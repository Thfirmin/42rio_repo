/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:39:07 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/20 14:09:18 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	nbr;

	if (nb < 0)
		return (0);
	else if (power == 0)
		return (1);
	nbr = nb;
	if (power > 1)
	{
		nbr = ft_recursive_power(nb, (power -1));
		return (nbr * nb);
	}
	return (nbr);
}
