/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 02:24:59 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/10 03:02:16 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	ft_putstr_non_printable("Hello, There\nAre..\tyou ok\e");
	return (0);
}
