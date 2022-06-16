/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dameneze <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 01:08:43 by dameneze          #+#    #+#             */
/*   Updated: 2021/12/15 23:39:50 by dameneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	check_uppercase;

	check_uppercase = 0;
	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			if (!(65 <= *str && *str <= 90))
				check_uppercase = 1;
			str++;
		}
	}
	if (check_uppercase == 0)
		return (1);
	else
		return (0);
}
