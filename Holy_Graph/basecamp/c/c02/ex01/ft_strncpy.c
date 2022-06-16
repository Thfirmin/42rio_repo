/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:01:47 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 01:10:42 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((count < n) && (src[count] != '\0'))
	{
		dest[count] = src [count];
		count ++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count ++;
	}
	return (dest);
}
