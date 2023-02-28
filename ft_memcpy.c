/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 03:41:21 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/01/10 14:40:02 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	if (dst == src || !n)
		return (dst);
	i = 0;
	while (i < n)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}
/*
int main()
{
	char dst[] = "Hello";
	char src[] = "olla";
	printf("%s",ft_memcpy(dst,src,4));
	printf("%s",memcpy(dst,src,4));

}
*/