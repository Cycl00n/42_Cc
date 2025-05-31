/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 19:12:02 by clnicola          #+#    #+#             */
/*   Updated: 2025/05/31 19:53:36 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (const unsigned char)c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
int main()
{
    char s[] = "hello world";
    char *result;

    result = ft_memchr(s, 'o', 5);
    if (result)
        printf("Found 'o' at: %s\n", result);
    else
        printf("Did not find 'o' in first 5 bytes.\n");

    result = ft_memchr(s, 'o', 12);
    if (result)
        printf("Found 'o' at: %s\n", result);
    else
        printf("Did not find 'o' in 12 bytes.\n");

    result = ft_memchr(s, 'z', 12);
    if (result)
        printf("Found 'z' at: %s\n", result);
    else
        printf("Did not find 'z' in 12 bytes.\n");
        
    result = ft_memchr(s, '\0', 12);
    if (result)
        printf("Found '\\0' at end: %s (value %d)\n", result, *result);
    else
        printf("Did not find '\\0' in 12 bytes.\n");


    return 0;
}*/