/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:52:40 by thfirmin          #+#    #+#             */
/*   Updated: 2022/03/31 21:58:43 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 4;
	num2 = 2;
	printf ("num1 = %d|num2 = %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf ("num1 = %d|num2 = %d\n", num1, num2);
	return (0);
}
