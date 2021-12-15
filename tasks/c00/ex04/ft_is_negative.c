/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:51:36 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/11 20:51:34 by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write (1, "P", 1);
	else
		write (1, "N", 1);
}	