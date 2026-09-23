/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-23 12:52:09 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-23 12:52:09 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (*s++)
		count++;
	return (count);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "abc";
    char str2[] = "abdef12345";
	char str3[] = "    ";
	char str4[] = "";

	printf("%lu\n", ft_strlen(str1));
    printf("%lu\n", ft_strlen(str2));
	printf("%lu\n", ft_strlen(str3));
	printf("%lu\n", ft_strlen(str4));

	printf("%lu\n", strlen(str1));
    printf("%lu\n", strlen(str2));
	printf("%lu\n", strlen(str3));
	printf("%lu\n", strlen(str4));

    return (0);
} */