/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:14:06 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/20 00:52:34 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	int	nbr;

	nbr = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (nbr);
	if (nb > 2)
		nbr = ft_recursive_factorial(nb - 1);
	return (nb * nbr);
}
