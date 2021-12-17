/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:54:02 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/16 22:54:24 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
		}
		else if (*str >= 'A' && *str <= 'Z')
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

/*int	main(void)
{
	char	*str;
	int	x;

	x = 0;
	str = "abcDefG";
	x = ft_str_is_alpha(str);
	printf ("%d\n", x);
        str = "A1b2C3d4";
        x = ft_str_is_alpha(str);
        printf ("%d\n", x);
        str = "Hello, World!";
        x = ft_str_is_alpha(str);
        printf ("%d\n", x);
        str = "";
        x = ft_str_is_alpha(str);
        printf ("%d\n", x);
}*/
