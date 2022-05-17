/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 00:04:24 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 00:18:58 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	limit;
	int	aux;

	limit = 0;
	while (limit < size)
	{
		size --;
		while (limit < size)
		{
			if (tab[limit] > tab[(limit + 1)])
			{
				aux = tab[(limit + 1)];
				tab[(limit + 1)] = tab[limit];
				tab[limit] = aux;
			}
			limit ++;
		}
		limit = 0;
	}
}
