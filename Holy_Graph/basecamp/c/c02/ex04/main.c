/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:14:40 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 01:41:17 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("\"\": %d\n", ft_str_is_lowercase(""));
	printf("\"Ola\": %d\n", ft_str_is_lowercase("ola"));
	printf("\"OLA\": %d\n", ft_str_is_lowercase("OLA"));
	printf("\"H3llo\": %d\n", ft_str_is_lowercase("H3llo"));
	printf("\"hello, world!\": %d\n", ft_str_is_lowercase("hello, world!"));
	return (0);
}
