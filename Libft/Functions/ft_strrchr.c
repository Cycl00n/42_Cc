/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:32:58 by clnicola          #+#    #+#             */
/*   Updated: 2025/05/30 18:54:38 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i --;
	}
	return (NULL);
}

/*#include <stdio.h>
int main()
{
    const char *my_string = "helloliii";
    char *result;

    result = ft_strrchr(my_string, 'l');
    if (result)
        printf("Found 'l' at: %s\n", result);
    else
        printf("Did not find 'l'\n");

    result = ft_strrchr(my_string, 'z');
    if (result)
        printf("Found 'z' at: %s\n", result);
    else
        printf("Did not find 'z'\n");

    result = ft_strrchr(my_string, '\0');
    if (result)
        printf("Found '\\0' at: %p (value: %d)\n", (void *)result, *result);
    else
        printf("Did not find '\\0'\n");

    return 0;
}*/