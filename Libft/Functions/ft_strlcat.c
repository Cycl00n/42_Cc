/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:12:44 by clnicola          #+#    #+#             */
/*   Updated: 2025/05/30 18:07:08 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t sz)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = ft_strlen(dst);
	i = 0;
	k = j;
	while (src[i] && (i + j < sz - 1))
	{
		dst[j] = src[i];
		i ++;
		j ++;
	}
	if (sz > 0)
	{
		dst[j] = '\0';
	}
	return (k + ft_strlen(src));
}

/*#include <stdio.h>
int	main(void)
{
	char	dest[12] = "1337 42";
	char	src[12] = "Born to code";
	int	size = 20;

	printf("Dest Before: %s\n", dest);
	printf("Return of strlcat: %d\n", ft_strlcat(dest, src, size));
	printf("Dest after: %s\n", dest);
}*/