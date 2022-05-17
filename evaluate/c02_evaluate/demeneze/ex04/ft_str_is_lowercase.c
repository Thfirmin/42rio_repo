/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dameneze <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 01:01:10 by dameneze          #+#    #+#             */
/*   Updated: 2021/12/15 23:38:57 by dameneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	check_lowercase;

	check_lowercase = 0;
	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			if (!(97 <= *str && *str <= 122))
				check_lowercase = 1;
			str++;
		}
	}
	if (check_lowercase == 0)
		return (1);
	else
		return (0);
}
