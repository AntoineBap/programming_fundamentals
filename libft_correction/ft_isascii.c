/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-23 11:40:42 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-23 11:40:42 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
    char a = 'a';
    char b = 'B';
	char c = 172;

    printf("%d\n", ft_isascii(a));
    printf("%d\n", ft_isascii(b));
	printf("%d\n", ft_isascii(c));

	printf("%d\n", isascii(a));
    printf("%d\n", isascii(b));
	printf("%d\n", isascii(c));
	
    return 0;
} */