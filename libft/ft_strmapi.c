/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-30 12:11:35 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-30 12:11:35 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}

/* char	to_upper(unsigned int i, char c)
{
	(void) i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	to_lower(unsigned int i, char c)
{
	(void) i;
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
#include <stdio.h>
int	main(void)
{
	char *result;

	result = ft_strmapi("hello", to_upper);
	printf("%s (attendu: HELLO)\n", result);
	free(result);

	result = ft_strmapi("HELLO", to_lower);
	printf("%s (attendu: hello)\n", result);
	free(result);

	result = ft_strmapi("", to_upper);
	printf("%s (attendu: )\n", result);
	free(result);

	return (0);
} */