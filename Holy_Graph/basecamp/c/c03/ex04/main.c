/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:17:13 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/06 19:52:00 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[42];

	strcpy (str, "hello, world !");
	printf ("\n%s\n", ft_strstr(str, "o, "));
	printf ("\n%s\n", str);
	return (0);
}
