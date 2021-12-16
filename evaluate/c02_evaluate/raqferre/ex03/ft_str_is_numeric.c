/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 00:17:12 by coder             #+#    #+#             */
/*   Updated: 2021/12/15 23:01:30 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
		}
		else
		{	
			return (0);
		}
		str++;
	}
	return (1);
}

// int main()
// {
//     int c = 0;
//     char *str = "ol";
//     c = ft_str_is_numeric(str);
// 	printf("%d\n", c);
// }