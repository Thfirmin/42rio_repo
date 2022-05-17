/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:17:21 by thfirmin          #+#    #+#             */
/*   Updated: 2022/04/06 19:47:11 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		instr;
	int		infind;

	instr = 0;
	while (str[instr] != '\0')
	{
		infind = 0;
		while (str[instr] == to_find[infind])
		{
			infind ++;
			instr ++;
			if (to_find[infind] == '\0')
			{
				return (&str[(instr - infind)]);
			}
		}
		if (str[instr] != '\0')
			instr ++;
	}
	return ('\0');
}
