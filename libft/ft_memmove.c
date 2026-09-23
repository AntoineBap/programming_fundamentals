/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-24 11:06:23 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-24 11:06:23 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp_src;
	char	*temp_dest;
	size_t	i;

	temp_src = (char *)src;
	temp_dest = (char *)dest;
	i = 0;
	if (temp_dest > temp_src)
		while (n-- > 0)
			temp_dest[n] = temp_src[n];
	else
	{
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "hello world";
    memmove(str + 2, str, 5);
    printf("%s\n", str);

	char str_alt[] = "hello world";
    ft_memmove(str_alt + 2, str_alt, 5);
    printf("%s\n", str_alt);

	char dest2[] = "hello world";
	char str2[] = "bye world";
    memmove(dest2, str2, 5);
    printf("%s\n", dest2);

	char dest2_alt[] = "hello world";
	char str2_alt[] = "bye world";
    ft_memmove(dest2_alt, str2_alt, 5);
    printf("%s\n", dest2_alt);

    return 0;
} */