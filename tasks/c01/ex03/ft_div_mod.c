/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:25:03 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/15 12:25:24 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

//int	main(void)
//{
//	int divisor;
//	int modulo;
//
//	ft_div_mod(7, 2, &divisor, &modulo);
//	printf("div: %d mod: %d", divisor, modulo);
//}
