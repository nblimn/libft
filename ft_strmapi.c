/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:39:42 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/26 00:28:11 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char    *res;

    i = 0;
    res = (char *)malloc(sizeof(char) * ft_strlen(((char *)s) + 1));
    if (!s || !f || !res)
        return (NULL);
    while (i < ft_strlen((char *)s))
    {
        res[i] = f(i,s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}
