/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:17:34 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/22 13:20:46 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int main(void)
{
	int i = -5;

	while (++i < 12)
	{
		printf("fibonacci(%d) = %d\n", i, ft_fibonacci(i));
	}
}
