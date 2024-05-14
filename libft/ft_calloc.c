/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomai <tkomai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 09:30:08 by tsukuru           #+#    #+#             */
/*   Updated: 2024/05/14 16:13:40 by tkomai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//I couldn't understand by my self.

#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    void *memory = malloc(count * size);
    if (memory == NULL)
    {
        return NULL;
    }
    
    char *ptr = memory;
    size_t i;
    i = 0;
    while (i < count * size)
    {
        ptr[i] = 0;
    }

    return memory;
}

#include <stdio.h>

// int main(void)
// {
//     char *b = "Bonjour Madame";
//     b = ft_calloc(8, sizeof(char));
//     printf("%s\n", b);
//     free(b);
//     return 0;
// }

// int main(void)
// {
//     char *b = ft_calloc(8, sizeof(char));
//     if (b != NULL) {
//         printf("%s", b);
//         // free(b); // 使用後にメモリを解放
//     }
//     return 0;
// }