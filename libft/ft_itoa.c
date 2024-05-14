/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomai <tkomai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 09:32:48 by tkomai            #+#    #+#             */
/*   Updated: 2024/05/14 11:37:13 by tkomai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*duplicate(char *str, int len, int n)
{
	unsigned int	num;

	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
	{
		num = n;
	}
	while (len > 0)
	{
		len--;
		if (str[len] == '-')
			break ;
		str[len] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = get_num_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str = duplicate(str, len, n);
	return (str);
}

// int main(void)
// {
// 	int a = -199555; //The establishment year of the NEOREX.
// 	char *str = ft_itoa(a);

// 	printf("%s\n", str);
// }