/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-da <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:03:26 by llima-da          #+#    #+#             */
/*   Updated: 2021/12/15 19:15:23 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	ret;

	i = 0;
	s = 1;
	ret = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = (str[i] - '0') + (ret * 10);
		i++;
	}
	return (ret * s);
}

int main () {
   int val;
   char str[20];
   
   strcpy(str, " 1234567asdas");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "++--+123dsasd");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}
