/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: AAAA/MM/DD 20:54:25 by tfirmino          #+#    #+#             */
/*   Updated: AAAA/MM/DD 20:54:22 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include        <unistd.h>

void    ft_put_digits(char a, char b, char c)
{
        write(1, &a, 1);
        write(1, &b, 1);
        write(1, &c, 1);
        if ((a > '7') && (b == '8') && (c == '9'))
        {
                write(1, ".", 1);
        }
        else
        {
                write(1, ", ", 2);
        }
}

void    ft_print_comb(void)
{
        char    a;
        char    b;
        char    c;

        a = '0';
        while (a <= '7')
        {
                b = a + 1;
                while (b <= '8')
                {
                        c = b + 1;
                        while (c <= '9')
                        {
                                ft_put_digits(a, b, c);
                                c++;
                        }
                        b++;
                }
                a++;
        }
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
