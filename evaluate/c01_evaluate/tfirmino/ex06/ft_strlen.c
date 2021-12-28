/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:35:02 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/15 12:35:23 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

int ft_strlen(char *str)
{
	int x;
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

//int	main(void)
//{
//	char	teste[] = "Hello World";
//	int	caractere;
//	caractere = ft_strlen(teste);
//	printf("%d", caractere);
//}
