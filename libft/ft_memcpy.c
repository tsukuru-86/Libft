// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_memcpy.c                                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: tsukuru <tsukuru@student.42.fr>           +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/04/22 15:35:48 by tsukuru           #+#    #+#             */
// /*   Updated: 2024/04/23 02:16:16 by tsukuru          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;

    i = 0;
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dst; // コピー後のdstを返す
}

int main(void)
{
    char *b;
    char a[4] = {10, 20, 30, 40};
    b = (char *)malloc(sizeof(char)*200);
    if(!b)
        return 0;
    ft_memcpy(b, a, sizeof(char)*4);
    printf("%d %d %d %d\n", b[0], b[1], b[2], b[3]);
    free(b);
}
