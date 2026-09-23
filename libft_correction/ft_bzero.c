/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-23 14:45:33 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-23 14:45:33 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*temp_ptr;

	temp_ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
		temp_ptr[i++] = '\0';
}
/* 
#include <stdio.h>
#include <string.h>
int main(void)
{
    char    buf1[20];
    char    buf2[20];

    bzero(buf1, 10);
    ft_bzero(buf2, 10);
    buf1[10] = '\0';
    buf2[10] = '\0';
    printf("%s\n", buf1);
    printf("%s\n", buf2);

	char buf3[10] = "hello";
	char buf4[10] = "hello";
	bzero(buf3, 0);
    ft_bzero(buf4, 0);
	printf("%s\n", buf3);
    printf("%s\n", buf4);

	bzero(buf3, 5);
    ft_bzero(buf4, 5);
	printf("%s\n", buf3);
    printf("%s\n", buf4);

    return (0);
} */