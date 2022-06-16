/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:06:22 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/05 21:14:28 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	indest;
	unsigned int	insrc;

	indest = 0;
	insrc = 0;
	while (dest[indest] != '\0')
	{
		indest ++;
	}
	while (src[insrc] != '\0' && insrc < nb)
	{
		dest[indest] = src[insrc];
		indest ++;
		insrc ++;
	}
	dest[indest] = '\0';
	return (dest);
}
