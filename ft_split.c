/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomai <tkomai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:35:55 by tkomai            #+#    #+#             */
/*   Updated: 2024/05/14 16:01:43 by tkomai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_box(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i] == c && s[i + 1] != c && s[i + 1]))
			count++;
		i++;
	}
	return (count + 1);
}

char	*copytoword(char *word, const char *s, char c, int *i)
{
	int	k;

	k = 0;
	while (s[*i] != c && s[*i])
	{
		word[k] = s[*i];
		k++;
		(*i)++;
	}
	word[k] = '\0';
	return (word);
}

void	free_array(char **array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	function(char const *s, char c, char **array, int j, int *i)
{
	int		keep;
	int		count_char;
	char	*word;

	count_char = 0;
	while (s[*i] == c && s[*i])
		(*i)++;
	keep = *i;
	while (s[*i] != c && s[*i])
	{
		count_char++;
		(*i)++;
	}
	word = (char *)malloc(sizeof(char) * (count_char + 1));
	if (!word)
	{
		free_array(array, j);
		return (0);
	}
	array[j] = copytoword(word, s, c, &keep);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**array;

	array = (char **)malloc(sizeof(char *) * (count_box(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (!function(s, c, array, j, &i))
			return (NULL);
		j++;
	}
	array[j] = NULL;
	return (array);
}

// int	main(void)
// {
// 	int		i;
// 	char	*str;
// 	char	c;
// 	char	**test;

// 	i = 0;
// 	str = "::Brazil:China:USA:Spain:France::";
// 	c = ':';
// 	test = ft_split(str, c);
// 	if (test == NULL)
// 	{
// 		printf("failed.\n");
// 	}
// 	while (test[i])
// 	{
// 		printf("%s\n", test[i]);
// 		free(test[i]);
// 		i++;
// 	}
// 	free(test);
// }

// char **ft_split(char const *s, char c)
// {
// 	int i;
// 	int j;
// 	int k;
// 	int keep;
// 	int count_char;
// 	char *word;

// 	char **array = (char **)malloc(sizeof(char *) * (count_box(s ,c) + 1));
// 	if (!array)
// 		return (NULL);

// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		count_char = 0;
// 		while (s[i] == c && s[i])
// 			i++;
// 		keep = i;
// 		while (s[i] != c && s[i])
// 		{
// 			count_char++;
// 			i++;
// 		}
// 		word = (char *)malloc(sizeof(char) * (count_char + 1));
// 		if (!word)
// 			return (NULL);
// 		k = 0;
// 		while (s[i] != c && s[i])
// 		{
// 			word[k] = s[i];
// 			k++;
// 			i++;
// 		}
// 		word[k] = '\0';
// 		array[j] = copytoword(word, s, c, keep);
// 		j++;
// 	}
// 	array[j] = NULL;
// 	return (array);
// }
