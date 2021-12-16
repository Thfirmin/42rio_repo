/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 00:17:12 by coder             #+#    #+#             */
/*   Updated: 2021/12/15 23:04:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
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
//     char *str = "2";
//     c = ft_str_is_lowercase(str);
// 	printf("%d\n", c);
// }