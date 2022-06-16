/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:52:40 by thfirmin          #+#    #+#             */
/*   Updated: 2022/03/31 22:18:38 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 3;
	printf("Original:	(a / b): %d | (a mod b): %d\n", (a / b), (a % b));
	ft_ultimate_div_mod(&a, &b);
	printf("42:		(a / b): %d | (a mod b): %d\n", a, b);
	return (0);
}
