/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dameneze <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 23:35:00 by dameneze          #+#    #+#             */
/*   Updated: 2021/12/15 23:30:17 by dameneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *arc)
{
	char	*temp;

	temp = dest;
	while (*arc != '\0')
	{
		*dest = *arc;
		dest++;
		arc++;
	}
	return (temp);
}
