/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomai <tkomai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:35:55 by tkomai            #+#    #+#             */
/*   Updated: 2024/05/11 17:31:19 by tkomai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char **result;
	int array_count;
	int i;
	char *test = s;

	array_count = 0;
	while(s[i])
	{
		if (s[i] != c && s[i + 1] == c)
			array_count++;
		i++;
	}
	i = 0;
	
	result = (char **)malloc(sizeof(char *) * (array_count + 1))
	if (!result)
		return (NULL);
	
	while (s[i])
	{
		if (s[i] != c)
		{
			i++;
		}
		char *array = (char *)malloc(sizeof(char) * (i + 1))
		if (!array)
		 return NULL;

		int j = 0;
		while (j < i)
		{
			array[j] = s[i]
		}
	}
	
}


int main(void)
{
	char *str = "Tokyo:China:USA:Spain:France";
	char c = ':';

	char *test = ft_split(str, c);
	printf("%s", test);
}
