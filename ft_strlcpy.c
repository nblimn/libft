/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:11:24 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/25 05:07:43 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize)
		dst[i] = '\0';
	return (ft_strlen(src));
}
// int main() {
//     char src[] = "Hello, world!";
//     char dst[15];

//     size_t n = 5;
//     size_t copied = ft_strlcpy(dst, src, n);

//     printf("Copied %zu characters from src to dst: %s\n", copied, dst);

//     return 0;
// }