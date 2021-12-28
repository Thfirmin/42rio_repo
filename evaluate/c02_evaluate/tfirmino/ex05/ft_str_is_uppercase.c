/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:54:02 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/16 22:54:24 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int   main(void)
{
        char    *str;
        int     x;

        x = 0;
        str = "aBcDeFg";
        x = ft_str_is_uppercase(str);
        printf ("%d\n", x);
        str = "ABCDEEFG";
        x = ft_str_is_uppercase(str);
        printf ("%d\n", x);
        str = "HELLO, WORLD!";
        x = ft_str_is_uppercase(str);
        printf ("%d\n", x);
        str = "";
        x = ft_str_is_uppercase(str);
        printf ("%d\n", x);
}*/
