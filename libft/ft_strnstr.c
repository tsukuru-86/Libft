/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsukuru <tsukuru@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:58:54 by tsukuru           #+#    #+#             */
/*   Updated: 2024/05/03 18:27:24 by tsukuru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    char *n = NULL;
    char *h;
    h = (char *)haystack;
    size_t i;
    i = 0;
    while(needle[i] && len > i)
    {
        n[i] = needle[i];
        i++;
    }
    i = 0;
    while(*h)
    {
        if (*h == *n)
        {
            char *z;
            z = h;
            while (*h == *n)
            {

                if (len == i)
                {
                    return z;
                }
                h++;
                n++;
                i++;
            }
        }
        h++;
    }
    return NULL;
}

#include <stdio.h>

int main(void)
{
    char a[] = "Bonjour comment allez-vous?";
    char b[] = "comment";
    char *test = ft_strnstr(a, b, sizeof(b));
    
    if (test != NULL)
    {
        printf("Found %s.\n", test);
    }else{
        printf("Not found.");
    }
}