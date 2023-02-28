/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 06:42:20 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/27 23:32:55 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new;

	if (!f || !del || !lst)
		return (NULL);
	new = ft_lstnew((*f)(lst->content));
	if (!new)
		return (NULL);
	ptr = new;
	while (lst->next)
	{
		lst = lst->next;
		new->next = ft_lstnew((*f)(lst->content));
		if (!new->next)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		new = new->next;
	}
	return (ptr);
}
