/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:14:40 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 01:44:19 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("\"\": %d\n", ft_str_is_uppercase(""));
	printf("\"Ola\": %d\n", ft_str_is_uppercase("ola"));
	printf("\"OLA\": %d\n", ft_str_is_uppercase("OLA"));
	printf("\"H3llo\": %d\n", ft_str_is_uppercase("H3llo"));
	printf("\"hello, world!\": %d\n", ft_str_is_uppercase("hello, world!"));
	return (0);
}
