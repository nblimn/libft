/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:24:43 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/28 07:50:49 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (d > s)
	{
		while (n--)
			*(d + n) = *(s + n);
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dst);
}
/*
int main()
{
	char str[] = "hello world";
    char buf[6];

	printf("%s\n",ft_memmove(str,str + 6, 2));
	printf("%s\n",memmove(str,str + 6, 2));
}
*/