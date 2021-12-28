/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:33:24 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/15 12:33:45 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <unistd.h>

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		write (1, &str[x], 1);
		x++;
	}
}

//int	main(void)
//{
//	char	teste[] = "Hello4242?1-+= World";
//
//	ft_putstr(teste);
//	return (0);
//}
