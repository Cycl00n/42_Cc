/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:39:36 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/10 10:39:38 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*strs;
	char	*strd;
	int		i;

	strs = (char *)src;
	strd = (char *)dest;
	i = 0;
	while (i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char str_dest[20];
    char str_src[] = "Hello World!";
    int int_dest[5];
    int int_src[] = {10, 20, 30, 40, 50};

    printf("--- ft_memcpy Test ---\n");

    ft_memcpy(str_dest, str_src, strlen(str_src) + 1);
    printf("String copy: Source=\"%s\", Dest=\"%s\"\n", str_src, str_dest);

    ft_memcpy(int_dest, int_src, 3 * sizeof(int));
    printf("Int array copy (first 3 elements): %s\n",
    memcmp(int_dest, int_src, 3 * sizeof(int)) == 0 ? "SUCCESS" : "FAILURE");

    return (0);
}*/