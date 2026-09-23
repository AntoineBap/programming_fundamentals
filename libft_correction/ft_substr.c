/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-30 09:38:35 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-30 09:38:35 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

/* #include <stdio.h>
int main(void)
{
    char *result;

    // Cas normal
    result = ft_substr("Hello, World!", 7, 5);
    printf("%s (attendu: World)\n", result);
    free(result);

    // Start = 0
    result = ft_substr("Hello", 0, 3);
    printf("%s (attendu: Hel)\n", result);
    free(result);

    // Len > longueur restante
    result = ft_substr("Hello", 2, 100);
    printf("%s (attendu: llo)\n", result);
    free(result);

    // Start > longueur de s
    result = ft_substr("Hello", 10, 3);
    printf("%s (attendu: )\n", result);
    free(result);

    // Len = 0
    result = ft_substr("Hello", 1, 0);
    printf("%s (attendu: )\n", result);
    free(result);

    // s vide
    result = ft_substr("", 0, 5);
    printf("%s (attendu: )\n", result);
    free(result);

    result = ft_substr(NULL, 0, 5);
    printf("%s (attendu: (null))\n", result);

    return (0);
} */