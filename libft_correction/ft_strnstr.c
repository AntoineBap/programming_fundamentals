/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-28 09:18:11 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-28 09:18:11 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == 0)
		return ((char *) big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
		{
			j++;
			if (little[j] == 0)
				return ((char *) big + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

/* #include <stdio.h>
#include <bsd/string.h>

int main(void)
{
    char    big[] = "Bonjour. comment vas-tu ?";
	char    little[] = "r. co";
	char    little2[] = "ent allz";
	char    little3[] = "";


    printf("%p\n", strnstr(big, little, 30));
    printf("%p\n", ft_strnstr(big, little, 30));
	printf("%p\n", strnstr(big, little, 5));
    printf("%p\n", ft_strnstr(big, little, 5));
	printf("%p\n", strnstr(big, little2, 30));
    printf("%p\n", ft_strnstr(big, little2, 30));
	printf("%p\n", strnstr(big, little3, 30));
    printf("%p\n", ft_strnstr(big, little3, 30));
    printf("%p\n", big);

    return (0);
} */

//  cc -Wall -Wextra -Werror ft_strnstr.c -lbsd