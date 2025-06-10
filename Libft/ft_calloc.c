/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:38:48 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/10 10:38:51 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s;
	size_t	j;

	j = 0;
	s = (char *)malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	while (j < nmemb * size)
	{
		s[j] = 0;
		j++;
	}
	return (s);
}

/*#include <stdio.h>
int main()
{
	char *str = {"Hello"};
	printf("Before calloc: %s \n", str);
	str = ft_calloc(6, sizeof(char));
	printf("After calloc: %s", str);
}*/