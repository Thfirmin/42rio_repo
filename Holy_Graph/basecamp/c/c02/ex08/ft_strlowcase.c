/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 02:36:37 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 02:38:36 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			str[count] = (str[count] + 32);
		}
		count ++;
	}
	return (str);
}
