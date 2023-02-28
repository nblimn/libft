/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:50:34 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/28 05:11:28 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s) + 1;
	while (i--)
	{
		if (*(s + i) == (unsigned char)c)
			return ((char *)(s + i));
	}
	return (NULL);
}