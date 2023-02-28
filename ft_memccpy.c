/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 05:04:15 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/28 05:04:17 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = dst;
	s = src;
	while (n > 0)
	{
		*d = *s;
		if (*s == (unsigned char)c)
		{
			return (d + 1);
		}
		n--;
		s++;
		d++;
	}
	return (NULL);
}