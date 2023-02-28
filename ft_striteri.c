/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 00:28:46 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/28 05:07:32 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    size_t  i;

    i = 0;
    if (!s || !(*f))
        return ;
    while (s[i])
    {
        (*f)(i,&s[i]);
        i++;
    }
    s[i] = '\0';
}