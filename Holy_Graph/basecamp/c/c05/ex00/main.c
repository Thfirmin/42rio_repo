/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:49:21 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/20 00:50:46 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	i;

	i = -5;
	while (++i < 17)
	{
		printf("Result of %d = %d\n", i, ft_iterative_factorial(i));
	}
	return (0);
}
