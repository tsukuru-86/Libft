/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomai <tkomai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:35:55 by tkomai            #+#    #+#             */
/*   Updated: 2024/05/13 23:30:57 by tkomai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_box(char const *s, char c)
{
	int count;
	int i;
	
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}

	return count;
}

char **ft_split(char const *s, char c)
{
	int i;
	int j;
	int k;
	int keep;
	int count_char;
	char *word;

	char **array = (char **)malloc(sizeof(char *) * (count_box(s ,c) + 1));
	
	i = 0;
	j = 0;
	count_char = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		keep = i;
		while (s[i] != c && s[i])
		{
			count_char++;
			i++;
		}
		word = (char *)malloc(sizeof(char *) * (count_char + 1));
		i = keep;
		k = 0;
		while (s[i] != c && s[i])
		{
			word[k] = s[i];
			k++;
			i++;
		}
		word[k] = '\0';
		array[j] = word;
		j++;
	}
	return array;
}



int main(void)
{
	int i = 0;
	char *str = "::Tokyo:China:USA:Spain:France::";
	char c = ':';

	char **test = ft_split(str, c);
	while (test[i])
	{
		printf("%s\n", test[i]);
		i++;
	}
	
}


// char **ft_split(char const *s, char c)
// {
// 	int i;
// 	int k;
// 	int j;
// 	int count;

// 	count = 0;
// 	i = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == c && s[i + 1] != c)
// 			count++;
// 	}
	
// 	char **allocate = (char **)malloc(sizeof(char *) * (count + 1));
	
// 	i = 0;
// 	while (s[i] == c)
// 		i++;

// 	k = 0;
// 	j = 0;
// 	while (s[i + k] != c && s[i + k])
// 	{
// 		allocate[j] = &s[i + k];
		
// 	}
// }



