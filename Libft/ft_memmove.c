/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:39:51 by clnicola          #+#    #+#             */
/*   Updated: 2025/05/30 17:35:08 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*strd;
	const char		*strs;
	size_t			i;

	strd = (char *)dest;
	strs = (const char *)src;
	if (strd == strs || n == 0)
		return (dest);
	if (strd < strs)
	{
		i = 0;
		while (i < n)
		{
			*strd++ = *strs++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			*--strd = *--strs;
		}
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char buffer1[20];
    char buffer2[20];
    char overlap_buffer[20];

    printf("--- ft_memmove Test ---\n");

    strcpy(buffer1, "HelloWorld");
    ft_memmove(buffer2, buffer1, strlen(buffer1) + 1);
    printf("Non-overlap: Src=\"%s\", Dest=\"%s\"\n", buffer1, buffer2);

    strcpy(overlap_buffer, "ABCDEFG");
    ft_memmove(overlap_buffer + 3, overlap_buffer, 4);
    printf("Overlap (dest > src): \"%s\"\n", overlap_buffer);

    strcpy(overlap_buffer, "ABCDEFG");
    ft_memmove(overlap_buffer, overlap_buffer + 2, 5);
    printf("Overlap (dest < src): \"%s\"\n", overlap_buffer);

    return (0);
}
*/