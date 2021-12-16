/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dameneze <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 02:54:39 by dameneze          #+#    #+#             */
/*   Updated: 2021/12/15 23:46:21 by dameneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	new_word;

	new_word = 0;
	if (*str != '\0')
	{
		while (*str != '\0')
		{
			if (('0' <= *str && *str <= '9') || ('a' <= *str && *str <= 'z')
				|| ('A' <= *str && *str <= 'Z'))
			{
				if ('a' <= *str && *str <= 'z' && new_word == 0)
					*str -= 32;
				new_word = 1;
			}
			else
				new_word = 0;
			str++;
		}
	}
	return (str);
}
