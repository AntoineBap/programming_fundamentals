/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-23 11:29:00 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-23 11:29:00 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
    char a = 'a';
    char b = 'c';
	char c = '5';
	char d = ' ';

    printf("%d\n", ft_isalnum(a));
    printf("%d\n", ft_isalnum(b));
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(d));
	printf("\n");
	printf("%d\n", isalnum(a));
    printf("%d\n", isalnum(b));
	printf("%d\n", isalnum(c));
	printf("%d\n", isalnum(d));
	

    return 0;
} */