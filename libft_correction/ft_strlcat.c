/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-24 13:15:54 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-24 13:15:54 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		dst_len = size;
	if (dst_len == size)
		return (size + src_len);
	if (src_len < size - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, size - dst_len - 1);
		dst[size - 1] = '\0';
	}
	return (dst_len + src_len);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char    dst[30] = "Bonjour Test";
	char    src[] = "AU revoir";
	char    dst2[30] = "Bonjour Test";
	char    src2[] = "AU revoir";
	char 	dst3[30] = "123";
	char 	src3[] = "456789";

    printf("%lu\n%s\n", strlcat(dst, src, 25), dst);
	printf("%lu\n%s\n", ft_strlcat(dst, src, 25), dst);
    printf("%lu\n%s\n", strlcat(dst2, src2, 17), dst2);
    printf("%lu\n%s\n", ft_strlcat(dst2, src2, 17), dst2);
	printf("%lu\n%s\n", strlcat(dst3, src3, 7), dst3);
	printf("%lu\n%s\n", ft_strlcat(dst3, src3, 7), dst3);

    return (0);
} */
