/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 03:23:22 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/28 07:48:58 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*b;

	i = 0;
	if (n == 0)
		return ;
	b = (unsigned char *)s;
	while (i < n)
	{
		b[i++] = 0;
	}
	return ;
}
//using unsigned is because to access only a byte of memory,
// this prevents unwanted behaviour since 
//it writes to n zeroed bytes to string s
/*size_t cannot be negative*/
// int main ()
// {
// 	char *str;
// 	str = malloc(sizeof(char)*4);
// 	strcpy(str,"1234");
// 	printf("Original str : \n");
// 	printf("%s\n",str);
// 	str++; // to see that after 1 will be zeroed
// 	ft_bzero((void *)str,3);
// 	str--; // to go back to index 0
// 	printf("Zeroed str : \n%s\n",str);
// }