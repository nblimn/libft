/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:27:17 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/28 07:52:05 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*s1 != 0 || *s2 != 0) && i < n)
	{
		if (s1++ != s2++)
			return ((unsigned char)s2[i] - (unsigned char)s1[i]);
		i++;
	}
	return (0);
}