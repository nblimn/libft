/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:16:50 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/28 05:08:00 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;
	
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (*(s + i) == (char)c)
			return (((char *)s + i));				
		i++;
	}
	return (NULL);
}
// int main ()
// {
// 	char *str = "Hello World";
// 	char *ptr = ft_strchr(str,'r');
	
// 	if (!ptr)
// 		printf("Character not found \n");
// 	else
// 		printf("Character %c is found at position %ld\n", *ptr , ptr - str);
// }