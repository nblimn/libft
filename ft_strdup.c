/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:02:20 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/28 07:51:30 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char *dup;

	i = 0;
	if (!(dup = malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	i = 0;
	while (i <= ft_strlen(s1))
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
// int main()
// {
// 	char *str1 = "Hello berp";
// 	char *str2 = "";
	
// 	printf("Original string: %s\n", str1);
// 	printf("Duplicate string : %s\n", ft_strdup(str1));
// 	printf("Original string2 : %s\n",str2);
// 	printf("Duplicate string : %s \n",ft_strdup(str2));
// }