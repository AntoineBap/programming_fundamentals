/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-23 11:24:46 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-23 11:24:46 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
    char a = '0';
    char b = '2';
	char c = 'R';

    printf("%d\n", ft_isdigit(a));
    printf("%d\n", ft_isdigit(b));
	printf("%d\n", ft_isdigit(c));

	printf("%d\n", isdigit(a));
    printf("%d\n", isdigit(b));
	printf("%d\n", isdigit(c));

    return 0;
}  */