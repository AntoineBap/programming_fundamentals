/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-28 09:19:46 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-28 09:19:46 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) str1[i] != (unsigned char) str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
    char    buf1[26] = "Bonjour. comment vas-tu ?";
	char    buf2[26] = "Bonjour. comment vas-tu ?";
	char    buf3[30] = "Bonjour. comment allez-vous ?";
    buf1[26] = '\0';
	buf2[26] = '\0';
	buf3[30] = '\0';
    printf("%d\n", memcmp(buf1, buf2, 20));
    printf("%d\n", ft_memcmp(buf1, buf2, 20));
	printf("%d\n", memcmp(buf2, buf3, 20));
    printf("%d\n", ft_memcmp(buf2, buf3, 20));
	printf("%d\n", memcmp(buf2, buf3, 10));
    printf("%d\n", ft_memcmp(buf2, buf3, 10));
    return (0);
} */