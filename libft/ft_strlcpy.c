/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsukuru <tsukuru@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:14:30 by tsukuru           #+#    #+#             */
/*   Updated: 2024/04/27 14:10:05 by tsukuru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t src_len = 0;
    const char *s = src;

    while (*s != '\0')
    {
        s++;
        src_len++;
    }

    if (dst == NULL)
    {
        return src_len;
    }

    size_t i = 0;
    char *d = dst;
    while (i < dstsize - 1 && *src != '\0')
    {
        *dst = *src++;
        i++;
    }
    
    *d = '\0';
    
    return src_len;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char dst[20];
//     const char *src = "Hello, World!";
//     size_t ret;

//     // 十分な容量がある場合
//     ret = ft_strlcpy(dst, src, sizeof(dst));
//     printf("dst: %s, ret: %zu\n", dst, ret);

//     // 容量不足の場合
//     ret = ft_strlcpy(dst, src, 5);
//     printf("dst: %s, ret: %zu\n", dst, ret);

//     // 空文字列の場合
//     ret = ft_strlcpy(dst, "", sizeof(dst));
//     printf("dst: %s, ret: %zu\n", dst, ret);

//     // NULLの場合
//     ret = ft_strlcpy(NULL, src, sizeof(dst));
//     printf("ret: %zu\n", ret);

//     return 0;
// }