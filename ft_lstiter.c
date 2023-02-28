/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 05:18:50 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/26 06:41:26 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!f)
        return ;
    while (lst)
    {
        (*f)(lst->content);
        lst = lst->next;
    }
}