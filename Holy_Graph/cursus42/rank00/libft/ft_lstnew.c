/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                       :+:     :+:            */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 23:24:13 by thfirmin          #+#    #+#             */
/*   Updated: 2022/08/11 18:17:22 by Thiago F.    ###     ###.br              */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	newlist = (t_list *) malloc (sizeof(t_list));
	if (!newlist)
		return (0);
	newlist -> content = content;
	newlist -> next = 0;
	return (newlist);
}
