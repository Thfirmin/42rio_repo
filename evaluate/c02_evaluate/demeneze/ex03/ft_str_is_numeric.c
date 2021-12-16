/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dameneze <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 00:55:16 by dameneze          #+#    #+#             */
/*   Updated: 2021/12/15 23:31:59 by dameneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	check_number;

	check_number = 0;
	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			if (!(48 <= *str && *str <= 57))
				check_number = 1;
			str++;
		}
	}
	if (check_number == 0)
		return (0);
	else
		return (1);
}
