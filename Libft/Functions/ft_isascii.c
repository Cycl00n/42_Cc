/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:00:11 by clnicola          #+#    #+#             */
/*   Updated: 2025/05/30 15:20:33 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*#include <stdio.h>

int main()
{
    printf("--- ft_isascii Test ---\n");
    printf("Is 'G' ASCII? %s\n", ft_isascii('G') ? "Yes" : "No");
    printf("Is 0x80 ASCII? %s\n", ft_isascii(0x80) ? "Yes" : "No");
    printf("Is '\\t' ASCII? %s\n", ft_isascii('\t') ? "Yes" : "No");
    return (0);
}*/