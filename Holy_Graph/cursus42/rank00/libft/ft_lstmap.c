/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 23:23:02 by thfirmin          #+#    #+#             */
/*   Updated: 2022/08/06 23:36:19 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	del(f(lst->content));
	/*t_list	**newlst;
	t_list	*newnode;

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
	return (0);
}
