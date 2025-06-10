/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:39:52 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/10 18:25:45 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static size_t	ft_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	if (!s)
	{
		return (0);
	}
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i ++;
		}
		if (s[i])
		{
			words ++;
		}
		while (s[i] && s[i] != c)
		{
			i ++;
		}
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;
	char	**arr;

	i = 0;
	k = 0;
	arr = (char **) malloc((ft_words(s, c) + 1) * sizeof(char *));
	if (arr == NULL || s == NULL)
	{
		return (NULL);
	}
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i ++;
		}
		if (!s[i])
		{
			break ;
		}
		len = 0;
		while (s[i + len] && s[i + len] != c)
		{
			len ++;
		}
		arr[k] = (char *) malloc((len + 1) * sizeof(char));
		if (arr == NULL)
		{
			return (NULL);
		}
		j = 0;
		while (j < len)
		{
			arr[k][j++] = s[i++];
		}
		arr[k][j] = '\0';
		k ++;
	}
	arr[k] = NULL;
	return (arr);
}

/*#include <stdio.h>
int	main()
{
	char const *test_string1 = "punaise,ils parlent fort,les,lifeguards,,,";
    char delimiter1 = ',';
    char **result1;
    int i = 0;
	result1 = ft_split(test_string1, delimiter1);
	while (result1[i] != NULL)
    {
        printf("Word %d: %s\n", i, result1[i]);
        i++;
    }
}*/