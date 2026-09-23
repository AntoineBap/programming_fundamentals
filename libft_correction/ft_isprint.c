/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-23 11:47:08 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-23 11:47:08 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
    char a = '0';
    char b = 'P';
	char c = 127;

    printf("%d\n", ft_isprint(a));
    printf("%d\n", ft_isprint(b));
	printf("%d\n", ft_isprint(c));
	printf("\n");
	printf("%d\n", isprint(a));
    printf("%d\n", isprint(b));
	printf("%d\n", isprint(c));

    return 0;
}  */