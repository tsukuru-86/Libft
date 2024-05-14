/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomai <tkomai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:41:18 by tkomai            #+#    #+#             */
/*   Updated: 2024/05/14 17:05:05 by tkomai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char *str;

	index = 0;
	if (!s || !(*f))
		return (NULL);
	
	str = ft_strdup(s);
	
	if (!str)
		return 0;
	
	while (s[index])
	{
		str[index] = f(index, str[index]);
		if (!str[index])
			return  NULL;
		index++;
	}

	str[index] = '\0';
	return (str);
}

// char example_function(unsigned int index, char c) {
//     // アルファベットを3文字ずらす
//     if (ft_isalpha(c)) {
//         if (islower(c)) {
//             return ((c - 'a' + 3) % 26) + 'a';
//         } else {
//             return ((c - 'A' + 3) % 26) + 'A';
//         }
//     }
//     return c;
// }


// int main(void) {
//     char *str = "Hello, World!";
//     char *modified_str = ft_strmapi(str, example_function);

//     if (modified_str) {
//         printf("Modified string: %s\n", modified_str);
//         free(modified_str); // メモリを解放
//     } else {
//         printf("Memory allocation failed\n");
//     }

//     return 0;
// }