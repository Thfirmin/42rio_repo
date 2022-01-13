/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:30:40 by tfirmino          #+#    #+#             */
/*   Updated: 2022/01/07 16:30:40 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c);

void    ft_putnbr(int nb)
{
    unsigned int    num;
    if (nb < 0)
    {
        write (1, "-", 1);
        num = (nb * -1);
    }
    else
    {
        num = nb;
    }

    if (num >= 10)
    {
        ft_putnbr(num / 10);
    }
    ft_putchar(num % 10 + '0');
}

void    ft_putchar(char c)
{
    write (1, &c, 1);
}