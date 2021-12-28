/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:30:12 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/15 12:30:34 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	div = (*a / *b);
	*b = (*a - *b * div);
	*a = div;
}

//int	main()
//{
//	int	numdiv;
//	int	denmod;
//
//	numdiv = 7;
//	denmod = 2;
//	ft_ultimate_div_mod(&numdiv, &denmod);
//	printf("diva: %d modb: %d", numdiv, denmod);
//}
