/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:54:02 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/16 22:54:24 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] = (str[x] + 32);
		}
		x++;
	}
	return (str);
}

int   main(void)
{
        char    str[] = "fOdAsE";
        char    *x;

        *str[100] = "aBcDeFg";
        x = ft_strlowcase(str);
        printf ("%s\n", x);
        *str[100] = "aBcd3ef9";
        x = ft_strlowcase(str);
        printf ("%s\n", x);
        *str[100] = "Hello, World!";
        x = ft_strlowcase(str);
        printf ("%s\n", x);
        *str[100] = "";
        x = ft_strlowcase(str);
        printf ("%s\n", x);
}
