/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:18:48 by clnicola          #+#    #+#             */
/*   Updated: 2025/05/30 17:23:27 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>
#include <stddef.h>

int main()
{
    printf("--- ft_strlen Test ---\n");
    printf("Length of \"Hello\": %zu\n", ft_strlen("Hello"));
    printf("Length of \"\": %zu\n", ft_strlen(""));
    printf("Length of \"  spaces  \": %zu\n", ft_strlen("  spaces  "));
    return (0);
}*/