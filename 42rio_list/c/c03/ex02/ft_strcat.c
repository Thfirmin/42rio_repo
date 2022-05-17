/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:17:22 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/05 21:00:45 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	indest;
	int	insrc;

	indest = 0;
	insrc = 0;
	while (dest[indest] != '\0')
	{
		indest ++;
	}
	while (src[insrc] != '\0')
	{
		dest[indest] = src[insrc];
		insrc ++;
		indest ++;
	}
	dest[indest] = '\0';
	return (dest);
}
