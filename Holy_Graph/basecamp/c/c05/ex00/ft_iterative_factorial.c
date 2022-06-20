/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:39:39 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/20 00:08:50 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	nbr;

	nbr = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (nbr);
	while(nb != 1)
	{
		nbr *= nb;
		if (nbr == 0)
			nbr ++;
		nb --;
	}
	return (nbr);
}
