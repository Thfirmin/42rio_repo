/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <thawancamara@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 01:46:17 by tde-souz          #+#    #+#             */
/*   Updated: 2021/12/15 18:39:21 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char src[100] = "devore!";
	char dest[100] = "C é bom, ";
	char dest2[100] = "C é bom, ";
	
	strncat(dest, src, 6);
	printf("Original: %s\n", dest);
	ft_strncat(dest2, src, 4);
	printf("      42: %s\n", dest2);	
	return (0);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	int				count;
	int				i;

	n = 0;
	count = 0;
	i = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (n < nb && src[i] != '\0')
	{
		dest[count + i] = src[i];
		n++;
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}
