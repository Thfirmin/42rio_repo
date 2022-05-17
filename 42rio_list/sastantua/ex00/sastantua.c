/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 00:35:21 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/04 01:53:02 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	sastantua(int size)
{
	int	count;
	int	width;

	width = 1;
	count = 1;
	while (count <= size)
	{
		width = (width + (2 * (count + 2)));
		if (count > 1)
			width = (width + (2 * ((count / 2) + 1)));
		count ++;
	}
	printf ("%d\n", width);
}
