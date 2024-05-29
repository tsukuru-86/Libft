/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomai <tkomai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:20:16 by tkomai            #+#    #+#             */
/*   Updated: 2024/05/29 18:27:25 by tkomai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	output(const char *str, int sign)
{
	int	result;
	int	digit;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		digit = *str - '0';
		if (sign == 1 && (result > (2147483647 - digit) / 10))
			return (2147483647);
		if (sign == -1 && (result > (2147483648 - digit) / 10))
			return (-2147483648);
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	result = output(str, sign);
	return (result * sign);
}

// int main(void)
// {
// 	int test;
// 	char *a = "      86444444444444444444";

// 	test = ft_atoi(a);
// 	printf("c'est le %d\n", test);
// }