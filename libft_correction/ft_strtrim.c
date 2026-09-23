/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-30 11:22:48 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-30 11:22:48 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_char_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_is_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_is_char_in_set(s1[end - 1], set))
		end--;
	str = malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
    char *result;


    result = ft_strtrim("   Hello World   ", " ");
    printf("%s (attendu: Hello World)\n", result);
    free(result);

    result = ft_strtrim("aaHello Worldaa", "a");
    printf("%s (attendu: Hello World)\n", result);
    free(result);

    result = ft_strtrim("xyzHello Worldzyx", "xyz");
    printf("%s (attendu: Hello World)\n", result);
    free(result);

    result = ft_strtrim("Hello", "xyz");
    printf("%s (attendu: Hello)\n", result);
    free(result);

	result = ft_strtrim("Hellooooo", "o");
    printf("%s (attendu: Hell)\n", result);
    free(result);

    result = ft_strtrim("aaaa", "a");
    printf("%s (attendu: )\n", result);
    free(result);

    result = ft_strtrim("", "abc");
    printf("%s (attendu: )\n", result);
    free(result);

    result = ft_strtrim("   Hello   ", "");
    printf("%s (attendu:    Hello   )\n", result);
    free(result);

    result = ft_strtrim("aaaHello", "a");
    printf("%s (attendu: Hello)\n", result);
    free(result);

    result = ft_strtrim("Helloaaa", "a");
    printf("%s (attendu: Hello)\n", result);
    free(result);

    return (0);
} */