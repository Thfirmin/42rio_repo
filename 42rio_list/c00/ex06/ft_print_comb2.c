/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:48:12 by tfirmino          #+#    #+#             */
/*   Updated: 2022/01/06 00:48:12 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    impress(char un1, char de1, char un2, char de2);

void    circle(char un1, char de1, char un2, char de2);

void    ft_print_comb2(void) //fun ção principal do programa
{
    char    num1_un;
    char    num1_de;
    char    num2_un;
    char    num2_de;
    
    num1_de = '0';
    while (num1_de <= '9')
    {
        num1_un = '0';
        if (num1_de < '9')
        {
            while (num1_un <= '9')
            {
                circle (num1_un, num1_de, num2_un, num2_de);
                num1_un ++;
            }
        }
        else
        {
            while (num1_un <= '8')
            {
                circle (num1_un, num1_de, num2_un, num2_de);
                num1_un ++;
            }
        }
        num1_de ++;
    }
}

void    impress(char un1, char de1, char un2, char de2) //realiza a impressão do programa
{
    write (1, &de1, 1);
    write (1, &un1, 1);
    write (1, " ", 1);
    write (1, &de2, 1);
    write (1, &un2, 1);

}

void    circle(char un1, char de1, char un2, char de2) // leva o segundo numero de (n2 + 1) até 99.
{
    de2 = de1;
    un2 = (un1 + 1);

    while (de2 <= '9')
    {
        while (un2 <= '9')
        {
            impress (un1, de1, un2, de2);
            if (((de1 == '9') && (un1 == '8')) && ((de2 == '9') && (un2 == '9')))
            {
                //impede que p programa imprima ", " no ultimo elemento do programa.
               break;
            }
            write (1, ", ", 2);
            un2 ++;
        }
        un2 = '0';
        de2 ++;
    }
}