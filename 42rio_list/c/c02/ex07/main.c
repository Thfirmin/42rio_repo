/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:59:36 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/06 20:07:53 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	c[18];

	strcpy (c, "jesus... Amado!!!");
	printf ("%s\n", ft_strupcase(c));
	printf ("%s\n", c);
	return (0);
}
