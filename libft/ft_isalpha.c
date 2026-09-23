/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-23 11:15:48 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-23 11:15:48 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
    char a = 'a';
    char b = 'B';
	char c = '5';

    printf("%d\n", ft_isalpha(a));
    printf("%d\n", ft_isalpha(b));
	printf("%d\n", ft_isalpha(c));

	printf("%d\n", isalpha(a));
    printf("%d\n", isalpha(b));
	printf("%d\n", isalpha(c));
	
    return 0;
} */