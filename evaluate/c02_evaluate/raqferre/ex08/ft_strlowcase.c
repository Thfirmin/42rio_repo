/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 00:17:12 by coder             #+#    #+#             */
/*   Updated: 2021/12/15 23:12:50 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] = (str[x] + 32);
		}
		x++;
	}
	return (str);
}

// int main(void)
// {
//     char teste[] = "nhnhH0";
//     char *nbr;
//     nbr = ft_strlowcase(teste);
//     printf("%s\n",nbr);
// }