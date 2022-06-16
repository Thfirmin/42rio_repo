/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dameneze <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 01:22:43 by dameneze          #+#    #+#             */
/*   Updated: 2021/12/15 23:43:59 by dameneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	if (*str != '\0')
	{
		while (*str != '\0')
		{
			if (97 <= *str && *str <= 122)
				*str -= 32;
			str++;
		}
	}
	return (str);
}
