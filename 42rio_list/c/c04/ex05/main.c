/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:01:24 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/08 01:43:10 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	str[16];
	char	base[6];
	int		num;

	strcpy (str, "  +++--00110");
	strcpy (base, "0");
	num = (ft_atoi_base(str, base));
	printf ("%d\n", num);
	return (0);
}
