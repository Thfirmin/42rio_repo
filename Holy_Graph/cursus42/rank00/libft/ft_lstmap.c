/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                       :+:     :+:            */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 23:23:02 by thfirmin          #+#    #+#             */
/*   Updated: 2022/08/12 00:06:50 by Thiago F.    ###     ###.br              */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node;

	newlst = malloc(sizeof(t_list));
	if (!newlst)
		return (0);
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(newlst, del);
			return (0);
		}
		lst = lst -> next;
	}
	/*t_list	**newlst;
	t_list	*newnodeu;

	if (!f)
		return (0);
	while (lst)
	{
		newnode = ft_lstnew(f(lst -> content));
		if (!newnode)
		{
			ft_lstclear(newlst, del);
			return (0);
		}
		ft_lstadd_back(newlst, newnode);
		lst = lst -> next;
	}*/
	return (*newlst);
}
