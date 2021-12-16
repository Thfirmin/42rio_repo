/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 00:17:12 by coder             #+#    #+#             */
/*   Updated: 2021/12/15 22:57:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
		}
		else if (*str >= 'A' && *str <= 'Z')
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
//     char *str = "a";
//     c = ft_str_is_alpha(str);
// 	printf("%d\n", c);
// }