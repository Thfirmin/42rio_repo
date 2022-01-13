/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:10:18 by tfirmino          #+#    #+#             */
/*   Updated: 2022/01/06 00:10:18 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char a, char b, char c);

void    ft_print_comb(void)
{
    char    frst_dgt;
    char    scnd_dgt;
    char    thrd_dgt;

    frst_dgt = '0';
    while (frst_dgt <= '7')
    {
        scnd_dgt = (frst_dgt + 1);
        while (scnd_dgt <= '8')
        {
            thrd_dgt = (scnd_dgt + 1);
            while (thrd_dgt <= '9')
            {
                ft_putchar(frst_dgt, scnd_dgt, thrd_dgt);
                thrd_dgt ++;
            }
            scnd_dgt ++;
        }
        frst_dgt ++;
    }
}

void    ft_putchar(char a, char b, char c)
{
    write (1, &a, 1);
    write (1, &b, 1);
    write (1, &c, 1);
    if (a < '7')
    {
        write (1, ", ", 2);
    }
    
}