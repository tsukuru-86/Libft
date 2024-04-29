/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsukuru <tsukuru@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:11:59 by tsukuru           #+#    #+#             */
/*   Updated: 2024/04/29 15:31:27 by tsukuru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
        {
            return (char *)s;
        }
        s++;
    }

    if (c == '\0')
    {
        return (char *)s;
    }

    return NULL;
}

// #include <stdio.h>

// int main(void)
// {
//     char *s ="I want to make the Youtube video.";
//     char *f = ft_strchr(s, 't');
//     printf("%s\n", f);
// }