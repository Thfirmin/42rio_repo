/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:43:27 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/06 19:52:50 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	limit;
	int				sizedest;
	int				sizesrc;

	sizedest = ft_strlen(dest);
	limit = (size - sizedest - 1);
	sizesrc = 0;
	while (limit > 0 && src[sizesrc] != '\0')
	{
		dest[sizedest] = src[sizesrc];
		limit --;
		sizedest ++;
		sizesrc ++;
	}
	dest[sizedest] = '\0';
	return (ft_strlen(dest));
}

int	ft_strlen(char *str)
{
	int	count;

	while (str[count] != '\0')
	{
		count ++;
	}
	return (count);
}
