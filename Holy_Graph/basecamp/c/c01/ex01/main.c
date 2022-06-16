/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:52:40 by thfirmin          #+#    #+#             */
/*   Updated: 2022/03/28 13:29:00 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	n0;
	int	*n1;
	int	**n2;
	int	***n3;
	int	****n4;
	int	*****n5;
	int	******n6;
	int	*******n7;
	int	********n8;

	n1 = &n0;
	n2 = &n1;
	n3 = &n2;
	n4 = &n3;
	n5 = &n4;
	n6 = &n5;
	n7 = &n6;
	n8 = &n7;
	ft_ultimate_ft(&n8);
	printf ("%d\n", n0);
	return (0);
}
