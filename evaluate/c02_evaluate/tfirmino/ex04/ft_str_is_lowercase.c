/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:54:02 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/16 22:54:24 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
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
        x = ft_str_is_lowercase(str);
        printf ("%d\n", x);
        str = "abcdeefg";
        x = ft_str_is_lowercase(str);
        printf ("%d\n", x);
        str = "hello, world!";
        x = ft_str_is_lowercase(str);
        printf ("%d\n", x);
        str = "";
        x = ft_str_is_lowercase(str);
        printf ("%d\n", x);
}*/
