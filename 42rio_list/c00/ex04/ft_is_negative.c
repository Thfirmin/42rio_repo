/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 23:53:55 by tfirmino          #+#    #+#             */
/*   Updated: 2022/01/05 23:53:55 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_is_negative(int n)
{
    if (n >= 0)
        write (1, "P", 1);
    else
        write (1, "N", 1);
}