/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:39:56 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/10 10:39:56 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
		{
			return (NULL);
		}
		i ++;
	}
	return ((char *)&s[i]);
}

/*#include <stdio.h>
int main()
{
    const char *my_string = "hello";
    char *result;

    result = ft_strchr(my_string, 'l');
    if (result)
        printf("Found 'l' at: %s\n", result);
    else
        printf("Did not find 'l'\n");

    result = ft_strchr(my_string, 'z');
    if (result)
        printf("Found 'z' at: %s\n", result);
    else
        printf("Did not find 'z'\n");

    result = ft_strchr(my_string, '\0');
    if (result)
        printf("Found '\\0' at: %p (value: %d)\n", (void *)result, *result);
    else
        printf("Did not find '\\0'\n");

    return 0;
}*/