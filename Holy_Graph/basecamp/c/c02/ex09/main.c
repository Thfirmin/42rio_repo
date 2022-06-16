/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 02:41:24 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/06 20:10:48 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	c[57];

	strcpy (c, "oi, tudo bem? 42PALaVraS quarenta-e-duas; cinquenta+e+um");
	printf ("%s\n", ft_strcapitalize(c));
	printf ("%s\n", c);
	return (0);
}
