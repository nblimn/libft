/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 02:53:50 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/26 03:08:41 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (*lst == NULL)
    {
        new->next = NULL;
        *lst = new;
    }
    else
    {
        new->next = *lst;
        *lst = new;
    }
}