/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-28 09:20:01 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-28 09:20:01 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*u_c_str;
	size_t			i;

	u_c_str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (u_c_str[i] == (unsigned char) c)
			return (&u_c_str[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
    char    buf1[26] = "Bonjour. comment vas-tu ?";
    buf1[26] = '\0';
    printf("%p\n", memchr(buf1, 'c', 20));
    printf("%p\n", ft_memchr(buf1, 'c', 20));
	printf("%p\n", memchr(buf1, 'v', 5));
    printf("%p\n", ft_memchr(buf1, 'v', 5));
	printf("%p\n", memchr(buf1, 'x', 20));
    printf("%p\n", ft_memchr(buf1, 'x', 20));
    return (0);
} */
