/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:49:43 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/06 19:36:22 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	str1[10];
	char	str2[10];
	int		resp;

	strcpy(str1, "ABC");
	strcpy(str2, "ABc");
	resp = strcmp(str1, str2);
	printf ("Std:\ns1 = \"%s\" s2 = \"%s\" resp = \"%d\"\n", str1, str2, resp);
	resp = ft_strcmp(str1, str2);
	printf ("42:\ns1 = \"%s\" s2 = \"%s\" resp = \"%d\"\n", str1, str2, resp);
	return (0);
}
