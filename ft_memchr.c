/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:29:48 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/28 07:50:18 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if ((*(unsigned char *)(s + i)) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
// int main(){
// 	char *test = "Velcro";
// 	printf("Before ft_memchr : %s\n", test);
// 	printf("After ft_memchr : %s\n", ft_memchr(test,'l',5));
// 	printf("After ft_memchr : %s\n", memchr(test,'l',5));
// }