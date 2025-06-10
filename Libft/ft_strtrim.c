/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:40:38 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/10 14:43:00 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

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
