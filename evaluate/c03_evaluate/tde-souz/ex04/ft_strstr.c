/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <thawancamara@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 02:46:12 by tde-souz          #+#    #+#             */
/*   Updated: 2021/12/15 18:42:55 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char str[100] = "C é bom, devore!";
	char find[100] = "o";

	printf("String Original  : %s\n", str);
	printf("Função Verdadeira: %s\n", strstr(str,find));
	printf("Função Pirata    : %s\n", ft_strstr(str,find));
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if (to_find[i] == str[j])
		{
			i++;
			if (to_find[i] == '\0')
				return (&str[j - i + 1]);
		}
		else
			i = 0;
		j++;
	}
	return (0);
}
