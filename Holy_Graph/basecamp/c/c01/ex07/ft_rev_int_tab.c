/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:41:09 by thfirmin          #+#    #+#             */
/*   Updated: 2022/03/31 23:51:00 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	limit;
	int	aux;

	limit = 0;
	size --;
	while (limit < (size - limit))
	{
		aux = tab[(size - limit)];
		tab[(size - limit)] = tab[limit];
		tab[limit] = aux;
		limit ++;
	}
}
