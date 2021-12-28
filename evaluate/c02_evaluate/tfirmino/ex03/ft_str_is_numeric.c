/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:54:02 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/16 22:54:24 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
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
        str = "1a1b1c1D1e1f1G1";
        x = ft_str_is_numeric(str);
        printf ("%d\n", x);
        str = "1234";
        x = ft_str_is_numeric(str);
        printf ("%d\n", x);
        str = "43ll0, 20519!";
        x = ft_str_is_numeric(str);
        printf ("%d\n", x);
        str = "";
        x = ft_str_is_numeric(str);
        printf ("%d\n", x);
}*/
