/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 00:17:12 by coder             #+#    #+#             */
/*   Updated: 2021/12/15 23:10:50 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = (str[x] - 32);
		}
		x++;
	}
	return (str);
}

// int main()
// {
//     char teste[] = "aa0p";
//     char *nbr;
//     nbr = ft_strupcase(teste);
//     printf("%s\n",nbr);
// }