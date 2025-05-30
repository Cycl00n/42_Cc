/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:40:23 by clnicola          #+#    #+#             */
/*   Updated: 2025/05/30 17:12:32 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c >= 97 && c <= 122)
		|| (c >= 65 && c <= 90)
		|| (c >= 48 && c <= 57));
}

/*#include <stdio.h>

int main()
{
    printf("--- ft_isalnum Test ---\n");
    printf("Is 'k' alnum? %s\n", ft_isalnum('k') ? "Yes" : "No");
    printf("Is '2' alnum? %s\n", ft_isalnum('2') ? "Yes" : "No");
    printf("Is '#' alnum? %s\n", ft_isalnum('#') ? "Yes" : "No");
    return (0);
}*/