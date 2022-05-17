/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:17:07 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/06 19:44:22 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src[7];
	char	dest[8];

	strcpy (src, "World!");
	strcpy (dest, "Hello, ");
	printf ("Std.Dest = \"%s\"\n", strcat(dest, src));
	strcpy (dest, "Hello, ");
	printf ("42.Dest = \"%s\"\n", ft_strcat(dest, src));
	return (0);
}
