/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:10:25 by clnicola          #+#    #+#             */
/*   Updated: 2025/05/30 15:20:57 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 176);
}

/*#include <stdio.h>

int main()
{
    printf("--- ft_isprint Test ---\n");
    printf("Is ' ' print? %s\n", ft_isprint(' ') ? "Yes" : "No");
    printf("Is '~' print? %s\n", ft_isprint('~') ? "Yes" : "No");
    printf("Is '\\n' print? %s\n", ft_isprint('\n') ? "Yes" : "No");
    return (0);
}*/