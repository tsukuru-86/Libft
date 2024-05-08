/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsukuru <tsukuru@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:44:50 by tsukuru           #+#    #+#             */
/*   Updated: 2024/05/08 11:27:02 by tsukuru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);


char *ft_strdup(const char *s1)
{
    char *space = (char *)malloc(ft_strlen(s1) +1);
    char *temp = space;
    if (space == NULL)
    {
        return NULL;
    }
    
    while (*s1)
    {
        *temp++ = *s1++;
    }
    *temp = '\0';
    return space;
}


// #include <stdio.h>

// int main(void)
// {
//     char *src = "Bonjour le monde.\n";
//     char *test = ft_strdup(src);
//     printf("%s", test);
// }