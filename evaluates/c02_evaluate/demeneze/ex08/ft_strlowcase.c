/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dameneze <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 02:49:36 by dameneze          #+#    #+#             */
/*   Updated: 2021/12/15 23:45:02 by dameneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	if (*str != '\0')
	{
		while (*str != '\0')
		{
			if (65 <= *str && *str <= 90)
				*str += 32;
			str++;
		}
	}
	return (str);
}
