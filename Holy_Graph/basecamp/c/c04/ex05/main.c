/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:01:24 by thfirmin          #+#    #+#             */
/*   Updated: 2022/08/05 03:29:18 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	str[16];
	char	base[17];
	unsigned long long int num;

	strcpy (str, "7fd5ffc253");
	strcpy (base, "0123456789abcdef");
	num = (ft_atoi_base(str, base));
	printf ("Converting \"%s\" into decimal...\n%lld\n", str, num);
	return (0);
}
