/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 00:56:34 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/05 01:55:39 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	n --;
	count = 0;
	while (count < n && (s1[count] != '\0' && s2[count] != '\0'))
	{
		if (s1[count] != s2[count])
			break ;
		else
			count ++;
	}
	if (s1[count] > s2[count])
		return (1);
	else if (s1[count] < s2[count])
		return (-1);
	else
		return (0);
}
