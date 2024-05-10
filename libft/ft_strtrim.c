/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsukuru <tsukuru@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:05:19 by tsukuru           #+#    #+#             */
/*   Updated: 2024/05/10 19:18:54 by tsukuru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t len;

    start = 0;
    while (s1[start] && s1[start] != *set)
    start++;

    end = ft_strlen(s1);
    while ()
}