/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:54:41 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/18 21:34:15 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[41];
	char	src[42];
	int		t_size;

	t_size = -1;
	strcpy(src, "Hello, World. This is a message who i wrt");
	while (++t_size <= sizeof(dest))
	{
		printf ("| TESTE %d |\n", t_size);
		printf ("Origin: %d | ", strlcpy(dest, src, sizeof(dest)));
		printf ("Dest: %s\n", dest);
		printf ("42CPYn: %d | ", ft_strlcpy(dest, src, sizeof(dest)));
		printf ("Dest: %s\n", dest);
		printf ("\n");
	}
	return (0);
}
