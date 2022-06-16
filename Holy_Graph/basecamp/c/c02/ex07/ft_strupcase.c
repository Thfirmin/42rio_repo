/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:56:00 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/01 02:31:35 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] = (str[count] - 32);
		}
		count ++;
	}
	return (str);
}
