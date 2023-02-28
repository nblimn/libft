/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 03:03:31 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/28 07:51:01 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*((unsigned char *)str + i) = c;
		i++;
	}
	return (str);
}
// int main()
// {
// 	char buffer[10] = "hello";
	
// 	// Call ft_memset to set the first 4 bytes to 'x'
// 	ft_memset(buffer, 'x', 4);

// 	// Print the contents of the buffer
// 	printf("Buffer after memset: %s\n", buffer);

// 	return 0;
// }