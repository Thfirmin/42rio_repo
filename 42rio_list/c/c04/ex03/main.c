/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 23:51:30 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/07 01:08:16 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	str[42];
	int		numstd;
	int		num42;

	strcpy (str, " ---+--+1234ab567");
	numstd = atoi(str);
	num42 = ft_atoi(str);
	printf ("string = \"%s\"\n", str);
	printf ("St.Number = %d\n", numstd);
	printf ("42.Number = %d\n", num42);
	return (0);
}
