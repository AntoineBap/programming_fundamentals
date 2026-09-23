/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-23 14:36:01 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-23 14:36:01 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char a = 'a';
	char b = 'B';
	char c = '0';

	printf ("%c\n", ft_toupper(a));
	printf ("%c\n", ft_toupper(b));
	printf ("%c\n", ft_toupper(c));

	printf ("%c\n", toupper(a));
	printf ("%c\n", toupper(b));
	printf ("%c\n", toupper(c));
	return (0);
} */