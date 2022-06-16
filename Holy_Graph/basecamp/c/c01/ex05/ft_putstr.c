/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:20:34 by thfirmin          #+#    #+#             */
/*   Updated: 2022/03/31 22:26:46 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	arrow;

	arrow = 0;
	while (str[arrow] != '\0')
	{
		write (1, &str[arrow], 1);
		arrow ++;
	}
}
