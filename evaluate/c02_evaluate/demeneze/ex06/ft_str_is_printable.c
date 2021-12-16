/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dameneze <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 01:13:41 by dameneze          #+#    #+#             */
/*   Updated: 2021/12/15 23:40:42 by dameneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	check_print;

	check_print = 0;
	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			if (!(32 <= *str && *str <= 126))
				check_print = 1;
			str++;
		}
	}
	if (check_print == 0)
		return (1);
	else
		return (0);
}
