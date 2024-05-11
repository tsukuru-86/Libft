/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsukuru <tsukuru@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:52:10 by tsukuru           #+#    #+#             */
/*   Updated: 2024/05/01 18:12:28 by tsukuru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a = s1;
	const unsigned char	*b = s2;

	while (n-- > 0)
	{
		if (*a != *b)
		{
			return (1);
		}
		a++;
		b++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     char a[] = "Bonjour!";
//     char b[] = "Bonjour!";
//     char c[] = "Bonsoir.";
//     int test1 = ft_memcmp(a, b, sizeof(a));
//     int test2 = ft_memcmp(a, c, sizeof(a));

//     if(test1 == 0)
//     {
//         printf("Same.\n");
//     }else{
//         printf("Not same.\n");
//     }
//     if(test2 == 0)
//     {
//         printf("Same.\n");
//     }else{
//         printf("Not same.\n");
//     }
// }