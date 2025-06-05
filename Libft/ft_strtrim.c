/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 16:19:20 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/05 16:51:25 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t sz);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	end = ft_strlen(s1) - 1;
	start = 0;
	while (ft_strchr(set, s1[start]) && start <= end)
	{
		start ++;
	}
	while (ft_strchr(set, s1[end]) && end >= 0)
	{
		end --;
	}
	str = (char *) malloc((end - start + 2) * (sizeof(char)));
	if (str == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}
