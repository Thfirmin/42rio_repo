/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:33:23 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/16 22:33:45 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	*(dest + x) = '\0';
	return (dest);
}

/*int	main(void)
{
	int	x;
	char	src[] = "Ola, mundo!";

	x = 0;
	while (src[x] != '\0')
	{
		x++;
	}
	char	dest[x];

	ft_strcpy(dest, src);
	printf("src: %s\n", src);
	printf("dest: %s", dest);
}*/
