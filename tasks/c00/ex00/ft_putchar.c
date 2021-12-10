/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   <archive.format>                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: AAAA/MM/DD hh:mm:ss by tfirmino          #+#    #+#             */
/*   Updated: AAAA/MM/DD hh:mm:ss by tfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
