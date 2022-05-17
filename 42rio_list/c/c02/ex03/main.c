/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:14:40 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 01:37:29 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("\"\": %d\n", ft_str_is_numeric(""));
	printf("\"OlA\": %d\n", ft_str_is_numeric("OlA"));
	printf("\"0133\": %d\n", ft_str_is_numeric("0133"));
	printf("\"H3llo\": %d\n", ft_str_is_numeric("H3llo"));
	printf("\"Hello, World!\": %d\n", ft_str_is_numeric("Hello, World!"));
	return (0);
}
