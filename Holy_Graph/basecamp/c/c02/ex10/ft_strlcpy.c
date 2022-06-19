/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:54:36 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/18 21:32:58 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	t_size;

	t_size = ft_strlen(src);
	if (!size)
		return (t_size);
	while (size > 1 && *src != '\0')
	{
		*dest++ = *src++;
		size --;
	}
	if (size > 0 || *src == '\0')
		*dest = '\0';
	return (t_size);
}

unsigned int ft_strlen(char *str)
{
	unsigned int	str_size;

	str_size = 0;
	while (str[str_size] != '\0')
	{
		str_size ++;
	}
	return (str_size);
}
