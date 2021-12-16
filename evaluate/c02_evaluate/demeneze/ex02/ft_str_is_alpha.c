/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dameneze <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 00:23:27 by dameneze          #+#    #+#             */
/*   Updated: 2021/12/15 23:37:23 by dameneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	check_others;

	check_others = 0;
	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			if (!((65 <= *str && *str <= 90) || (97 <= *str && *str <= 122)))
				check_others = 1;
			str++;
		}
	}
	if (check_others == 0)
		return (1);
	else
		return (0);
}
