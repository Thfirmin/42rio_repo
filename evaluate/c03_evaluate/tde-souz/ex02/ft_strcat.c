/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <thawancamara@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 01:46:17 by tde-souz          #+#    #+#             */
/*   Updated: 2021/12/15 18:34:37 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int	main()
{
	char src[100] = "devore!";
	char dest[100] = "C é bom, ";
	
	strcat(dest, src);
	printf("Original: %s\n", dest);
	ft_strcat(dest, src);
	printf("      42: %s\n", dest);	
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (dest[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}
