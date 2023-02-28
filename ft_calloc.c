/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:53:14 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/28 04:55:50 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t i;

	i = 0;
	if (size * count >= MAX)
		return (NULL);
	p = (void *)malloc(count * size);
	if (p == NULL)
		return (p);
	while (i < count * size)
		*((char *)p + i)  = '0';
	return (p);
}
// int main()
// {
// 	char *p = "Hello";
// 	printf("before calloc : %s\n",p);
// 	p = ft_calloc(5,5);
// 	printf("after calloc : %s\n.\n",p);	
// }