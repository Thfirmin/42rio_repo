/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:37:57 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/05 19:58:22 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define CORNER 'B'

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x_c;
	int	y_c;

	y_c = 1;
	while (y_c <= y)
	{
		x_c = 1;
		while (x_c <= x)
		{
			if ((x_c > 1 && x_c < x) && (y_c > 1 && y_c < y))
				ft_putchar(' ');
			else if ((x_c == 1 && y_c == 1) || (x_c == 1 && y_c == y))
				ft_putchar('A');
			else if ((x_c == x && y_c == 1) || (x_c == x && y_c == y))
				ft_putchar('C');
			else
				ft_putchar(CORNER);
			x_c++;
		}
		ft_putchar('\n');
		y_c++;
	}
}
