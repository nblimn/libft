/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:36:53 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/28 07:50:31 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) != *((unsigned char *)s2 + i))
			return ((*((unsigned char *)s1 + i))
				- (*((unsigned char *)s2 + i)));
		i++;
	}
	return (0);
}
// int main()
// {
// 	char *str1 = "Hello";
// 	char *str2 = "Hellk";

// 	printf("%d",ft_memcmp(str1,str2,5));
// 	printf("%d",memcmp(str1,str2,5));
// }