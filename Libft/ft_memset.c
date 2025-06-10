/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:39:47 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/10 10:39:49 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (char)c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
#include <string.h>
#include <stddef.h>

int main()
{
    char buffer[20];

    printf("--- ft_memset Test ---\n");

    strcpy(buffer, "Original String");
    printf("Before memset: \"%s\"\n", buffer);
    ft_memset(buffer, 'X', 5);
    printf("After memset (X, 5): \"%.20s\"\n", buffer);

    ft_memset(buffer, 'A', sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';
    printf("Before memset: \"%s\"\n", buffer);
    ft_memset(buffer + 5, '\0', 5);
    printf("After memset (\\0, 5): \"%.20s\"\n", buffer);

    return (0);
}*/