/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:54:41 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/09 22:20:35 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[41];
	char	src[42];

	strcpy(src, "Hello, World. This is a message who i wrt");
	printf ("Tamanho de src: %d\n", ft_strlcpy(dest, src, sizeof(dest)));
	printf ("Dest: %s\n", dest);
	return (0);
}
