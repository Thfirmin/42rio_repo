/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:14:40 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/06 20:00:11 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str[42];

	strcpy (str, "\"\"");
	printf ("%s: %d\n", str, ft_str_is_alpha(str));
	strcpy (str, "OlA");
	printf ("%s: %d\n", str, ft_str_is_alpha(str));
	strcpy (str, "OLA");
	printf ("%s: %d\n", str, ft_str_is_alpha(str));
	strcpy (str, "H3llo");
	printf ("%s: %d\n", str, ft_str_is_alpha(str));
	strcpy (str, "Hello, World!");
	printf ("%s: %d\n", str, ft_str_is_alpha(str));
	return (0);
}
