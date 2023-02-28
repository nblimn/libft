/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:48:57 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/28 07:54:05 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;

	if (*needle == '\0')
		return ((char *)haystack);
	if (!len)
		return (NULL);
	count = ft_strlen((char *)needle);
	while (*haystack != '\0' && len-- >= count)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, count) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
