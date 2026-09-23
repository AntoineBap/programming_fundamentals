/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-28 09:18:40 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-28 09:18:40 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		diff = ((unsigned char) s1[i] - (unsigned char) s2[i]);
		if (diff != 0)
			return (diff);
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
    printf("%d\n", strncmp(buf1, buf2, 20));
    printf("%d\n", ft_strncmp(buf1, buf2, 20));
	printf("%d\n", strncmp(buf2, buf3, 20));
    printf("%d\n", ft_strncmp(buf2, buf3, 20));
	printf("%d\n", strncmp(buf2, buf3, 10));
    printf("%d\n", ft_strncmp(buf2, buf3, 10));
    return (0);
} */