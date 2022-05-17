/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:59:36 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/06 20:09:53 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	c[20];

	strcpy (c, "JesuS... AmaDOoo!!!");
	printf ("%s\n", ft_strlowcase(c));
	printf ("%s\n", c);
	return (0);
}
