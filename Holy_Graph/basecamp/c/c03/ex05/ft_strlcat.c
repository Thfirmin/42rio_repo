/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:43:27 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/19 02:13:19 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	t_size;

	t_size = ft_strlen(src);
	while (size > 0 && *dest != '\0')
	{
		t_size ++;
		dest ++;
		size --;
	}
	while (size >= 1)
	{
		if (size == 1 || *src == '\0')
		{
			*dest = '\0';
			break ;
		}
		*dest++ = *src++;
		size --;
	}
	return (t_size);
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
