/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:40:41 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/10 10:40:42 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	j = start;
	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	sub = (char *) malloc((len + 1) * sizeof(char));
	if (sub == NULL)
	{
		return (NULL);
	}
	while (i < len && s[j] != '\0')
	{
		sub[i] = s[j];
		i ++;
		j ++;
	}
	sub[i] = '\0';
	return (sub);
}

/*
#include <stdio.h>
int main()
{
	char *s = {"Hello"};
	printf("Str: %s\n substr: %s \n", s, ft_substr(s, 0, 7));
}*/