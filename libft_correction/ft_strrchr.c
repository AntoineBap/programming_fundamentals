/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-28 09:17:43 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-28 09:17:43 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*result;
	char			cc;

	cc = (char) c;
	result = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			result = (char *) &s[i];
		i++;
	}
	if (s[i] == c)
		result = (char *) &s[i];
	return (result);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char    buf1[26] = "Bonjour. comment vas-tu ?";

	buf1[26] = '\0';
	printf("%p\n", strrchr(buf1, 'c'));
	printf("%p\n", ft_strrchr(buf1, 'c'));
	printf("%p\n", strrchr(buf1, 'v'));
	printf("%p\n", ft_strrchr(buf1, 'v'));
	printf("%p\n", strrchr(buf1, 'x'));
	printf("%p\n", ft_strrchr(buf1, 'x'));
	return (0);
} */