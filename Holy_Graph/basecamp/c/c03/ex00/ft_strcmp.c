/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:49:48 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/05 00:54:48 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	count;

	count = 0;
	while (s1[count] == s2[count] && (s1[count] != '\0' && s2[count] != '\0'))
	{
		count ++;
	}
	if (s1[count] > s2[count])
		return (1);
	else if (s1[count] < s2[count])
		return (-1);
	else
		return (0);
}
