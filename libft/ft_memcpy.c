/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-24 10:19:59 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-24 10:19:59 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp_dst;
	unsigned char	*temp_src;

	if (dest == NULL && src == NULL)
		return (dest);
	temp_dst = (unsigned char *) dest;
	temp_src = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		temp_dst[i] = temp_src[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
    char    dest[] = "Bonjour Test";
    // char    src[] = "";
	char    dst2[] = "";
    char    src2[] = "";

    memcpy(dest + 2, dest, 10);
    ft_memcpy(dst2, src2, 10);
    printf("%s\n", dest);
    printf("%s\n", dst2);

    return (0);
} */
