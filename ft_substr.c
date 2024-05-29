/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomai <tkomai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 09:23:14 by tsukuru           #+#    #+#             */
/*   Updated: 2024/05/28 19:34:15 by tkomai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdlib.h>

// char *ft_substr(char const *s, unsigned int start, size_t len)
// {
//     char const *début = (char const *)s;
//     char *space = (char *)malloc(sizeof(char) * len);
//     while (*s != (char)start)
//     {
//         s++;
//     }
//     while(*s || 0 < len--)
//     {
//         *space = *s;
//         space++;
//         s++;
//     }
//     return ((char *)début);
// }

// #include <stdio.h>

// int main(void)
// {
//     char *str = "Bonsoir.";
//     unsigned int a = 'n';
//     char *dst = ft_substr(str, a, 3);
//     printf("Le resultat est '%s'", dst);
// }

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*space;
	char	*temp;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (NULL);
	space = (char *)malloc(len + 1);
	if (!space)
		return (NULL);
	temp = space;
	s += start;
	while (*s && len--)
	{
		*temp++ = *s++;
	}
	*temp = '\0';
	return (space);
}

// #include <stdio.h>

// int main(void)
// {
//     char *str = "Bonsoir.";
//     char *dst = ft_substr(str, 2, 3);
//     printf("Le resultat est '%s'\n", dst); // 結果を表示
//     free(dst); // メモリ解放
// }