/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:14:40 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 01:53:43 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("\"\": %d\n", ft_str_is_printable(""));
	printf("\"Ola\": %d\n", ft_str_is_printable("ola"));
	printf("\"OLA\": %d\n", ft_str_is_printable("\n"));
	printf("\"\": %d\n", ft_str_is_printable("\t"));
	printf("\"hello, world!\": %d\n", ft_str_is_printable("hello, world!"));
	return (0);
}
