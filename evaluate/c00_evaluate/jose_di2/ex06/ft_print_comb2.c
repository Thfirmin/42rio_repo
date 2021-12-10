/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 02:47:02 by coder             #+#    #+#             */
/*   Updated: 2021/12/08 03:02:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_put_digits(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8' || c != '9' || d != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_inner_number(char a, char b)
{
	char	c;
	char	d;

	c = a;
	d = b + 1;
	while (c <= '9')
	{
		while (d <= '9')
		{
			ft_put_digits(a, b, c, d);
			d++;
		}
		c++;
		d = '0';
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			ft_inner_number(a, b);
			b++;
		}
		a++;
	}			
}
