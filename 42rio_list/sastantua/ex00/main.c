/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 00:39:21 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/04 00:01:27 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	sastantua(int size);

int	main(int argc, char *argv[])
{
	int arg;

	arg = atoi(argv[(argc - 1)]);
	sastantua(arg);
	return (0);
}
