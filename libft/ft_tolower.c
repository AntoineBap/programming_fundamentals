/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-23 14:39:48 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-23 14:39:48 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char a = 'a';
	char b = 'B';
	char c = '0';

	printf ("%c\n", ft_tolower(a));
	printf ("%c\n", ft_tolower(b));
	printf ("%c\n", ft_tolower(c));

	printf ("%c\n", tolower(a));
	printf ("%c\n", tolower(b));
	printf ("%c\n", tolower(c));
	return (0);
} */