/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:23:34 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/15 12:23:55 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

//int	main(void)
//{
//	int	valor_a;
//	int	valor_b;
//
//	valor_a = 5;
//	valor_b = 2;
//	ft_swap(&valor_a, &valor_b);
//	printf("A: %d B: %d", valor_a, valor_b);
//}

