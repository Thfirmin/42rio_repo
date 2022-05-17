/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:49:43 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/06 19:40:49 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	str1[10];
	char	str2[10];
	int		resp;

	strcpy (str1, "ABDAB");
	strcpy (str2, "ABCZB");
	resp = strncmp(str1, str2, 3);
	printf ("Std:\ns1 = \"%s\" s2 = \"%s\" resp = %d\n", str1, str2, resp);
	resp = ft_strncmp(str1, str2, 3);
	printf ("42:\ns1 = \"%s\" s2 = \"%s\" resp = %d\n", str1, str2, resp);
	return (0);
}
