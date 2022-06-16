/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 00:25:40 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/06 20:04:08 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[20];
	char	src[12];

	strcpy (src, "Ola, Mund\xA0o");
	printf ("Original:	%s\n", strcpy(dest, src));
	strcpy (dest, "");
	printf ("42:		%s\n", ft_strcpy(dest, src));
	return (0);
}
