/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsukuru <tsukuru@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:48:51 by tsukuru           #+#    #+#             */
/*   Updated: 2024/05/10 19:42:58 by tsukuru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
    const char *last = NULL;
    while (*s)
    {
        if (*s == (char)c)
        {
            last = s;
        }
        s++;
    }
    
    if (c == '\0')
    {
        return (char *)s;
    }

    return (char *)last;
}

// #include <stdio.h>

// int main(void)
// {
//     char *s ="I want to make the Youtube video.";
//     char *f = ft_strrchr(s, 't');
//     printf("%s\n", f);
// }