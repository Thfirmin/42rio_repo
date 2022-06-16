/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:17:07 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/06 19:46:44 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	src[7];
	char	dest[8];
	int		nb;

	strcpy (src, "World!");
	strcpy (dest, "Hello, ");
	nb = 11;
	printf ("Std.Dest = \"%s\"\n", strncat(dest, src, nb));
	strcpy (dest, "Hello, ");
	printf ("42.Dest = \"%s\"\n", ft_strncat(dest, src, nb));
	return (0);
}
