/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-23 13:08:13 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-23 13:08:13 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp_ptr;

	temp_ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
		temp_ptr[i++] = c;
	return (s);
}

/* 
#include <stdio.h>
#include <string.h>
int main(void)
{
    char    buf1[20];
    char    buf2[20];

    memset(buf1, 'A', 10);
    ft_memset(buf2, 'A', 10);
    buf1[10] = '\0';
    buf2[10] = '\0';
    printf("%s\n", buf1);
    printf("%s\n", buf2);


    memset(buf1, 25, 20);
    ft_memset(buf2, 25, 20);
	printf("%s\n", buf1);
    printf("%s\n", buf2);

	char buf3[10] = "hello";
	char buf4[10] = "hello";
	memset(buf3, 0, 0);
    ft_memset(buf4, 0, 0);
	printf("%s\n", buf3);
    printf("%s\n", buf4);

    return (0);
} */