/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:29:31 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/20 00:51:08 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb);

int	main(void)
{
	int	i;

	i = -5;
	while (++i < 17)
	{
		printf("Result of %d = %d\n", i, ft_recursive_factorial(i));
	}
	return (0);
}
