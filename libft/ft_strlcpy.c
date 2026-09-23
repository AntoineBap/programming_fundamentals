/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-24 12:46:22 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-24 12:46:22 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;

	len_src = ft_strlen(src);
	if (size > len_src + 1)
		ft_memcpy(dst, src, len_src + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = 0;
	}
	return (len_src);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
    char    dst[20] = "Bonjour Test";
    char    src[] = "AU revoir";
	char    dst2[20] = "Bonjour Test";
    char    src2[] = "AU revoir";

    printf("%s\n%lu\n", dst, strlcpy(dst, src, 7));
    printf("%s\n%lu\n", dst2, ft_strlcpy(dst2, src2, 7));

    return (0);
} */