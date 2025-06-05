/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:36:23 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/05 11:57:08 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < ft_strlen(s))
	{
		str[i] = s[i];
		i ++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int main()
{
	char *str = ft_strdup("hello");
	printf("%s", str);
}*/