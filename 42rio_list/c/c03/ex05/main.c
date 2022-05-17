/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:43:20 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/06 19:54:18 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

char			*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dst[8];
	char	src[6];

	ft_strcpy (dst, "Hello, ");
	ft_strcpy (src, "World");
	printf ("Comprimento da string = %i\n", ft_strlcat(dst, src, sizeof(dst)));
	printf ("Dest = \"%s\"\nSrc = \"%s\"\n", dst, src);
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count ++;
	}
	dest[count] = '\0';
	return (dest);
}
