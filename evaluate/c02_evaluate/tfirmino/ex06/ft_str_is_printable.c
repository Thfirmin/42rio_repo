/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:54:02 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/16 22:54:24 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str <= 126 && *str >= 33)
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

int   main(void)
{
        char    *str;
        int     x;

        x = 0;
        str = "\r";
        x = ft_str_is_printable(str);
        printf ("%d\n", x);
        str = "ABCDEEFG";
        x = ft_str_is_printable(str);
        printf ("%d\n", x);
        str = "HELLO, WORLD!";
        x = ft_str_is_printable(str);
        printf ("%d\n", x);
        str = "";
        x = ft_str_is_printable(str);
        printf ("%d\n", x);
}
