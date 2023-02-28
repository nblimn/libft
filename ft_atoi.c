/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 03:01:58 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/02/28 07:48:48 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	sum;

	if (!str)
		return (0);
	sign = 1;
	sum = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		sum = sum * 10 + *str - '0';
		str++;
	}
	return (sign * sum);
}
// int main()
// {
// 	char *number = "1234";
// 	char *number1 = "+1234";
// 	char *number2 = "-1234";
// 	char *number3 = "+-1234";
// 	char *number4 = "-+1234";
// 	char *number5 = "\n 1234";

// 	printf("Number is %s\n",number);
// 	printf("ft_atoi : %d\n",ft_atoi(number));
// 	printf("atoi : %d\n\n",atoi(number));

// 	printf("Number is %s\n",number1);
// 	printf("ft_atoi : %d\n",ft_atoi(number1));
// 	printf("atoi : %d\n\n",atoi(number1));

// 	printf("Number is %s\n",number2);
// 	printf("ft_atoi : %d\n",ft_atoi(number2));
// 	printf("atoi : %d\n\n",atoi(number2));

// 	printf("Number is %s\n",number3);
// 	printf("ft_atoi : %d\n",ft_atoi(number3));
// 	printf("atoi : %d\n\n",atoi(number3));

// 	printf("Number is %s\n",number4);
// 	printf("ft_atoi : %d\n",ft_atoi(number4));
// 	printf("atoi : %d\n\n",atoi(number4));

// 	printf("Number is %s\n",number5);
// 	printf("ft_atoi : %d\n",ft_atoi(number5));
// 	printf("atoi : %d\n\n",atoi(number5));
// }