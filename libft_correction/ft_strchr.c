/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-28 09:19:00 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-28 09:19:00 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char    buf1[26] = "Bonjour. comment vas-tu ?";

	buf1[26] = '\0';
	printf("%p\n", strchr(buf1, 'c'));
	printf("%p\n", ft_strchr(buf1, 'c'));
	printf("%p\n", strchr(buf1, 'v'));
	printf("%p\n", ft_strchr(buf1, 'v'));
	printf("%p\n", strchr(buf1, 'x'));
	printf("%p\n", ft_strchr(buf1, 'x'));
	return (0);
} */
