/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:42:56 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/28 07:51:46 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize < ft_strlen(dst))
		res = ft_strlen(src) + dstsize;
	else
		res = ft_strlen(src) + ft_strlen(dst);
	while (dst[i])
		i++;
	while (src[j] && dstsize > i + 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i]= '\0';
	return (res);
}