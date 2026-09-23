/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-30 09:24:19 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-30 09:24:19 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	count_words(const char *str, char c)
{
	int	words;
	int	len;

	words = 0;
	len = 0;
	while (*str)
	{
		if (*str != c)
			len++;
		else if (*str == c && len > 0)
		{
			words++;
			len = 0;
		}
		str++;
	}
	if (len > 0)
		words++;
	return (words);
}

int	*count_words_len(const char *str, char c, int *words_len)
{
	int	words;
	int	len;

	words = 0;
	len = 0;
	while (*str)
	{
		if (*str != c)
			len++;
		else if (c == *str && len > 0)
		{
			words_len[words] = len;
			words++;
			len = 0;
		}
		str++;
	}
	if (len > 0)
		words_len[words] = len;
	return (words_len);
}

char	**fill_tab(const char *str, char c, char **result)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*str)
	{
		if (*str != c)
			result[j][i++] = *str;
		else if (i > 0)
		{
			result[j][i] = '\0';
			j++;
			i = 0;
		}
		str++;
	}
	if (i > 0)
		result[j][i] = '\0';
	return (result);
}

static char	**alloc_words(int tab_size, int *words_len)
{
	char	**result;
	int		i;

	result = malloc((tab_size + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < tab_size)
	{
		result[i] = malloc((words_len[i] + 1) * sizeof(char));
		if (!result[i])
			return (free(result), NULL);
		i++;
	}
	result[tab_size] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		tab_size;
	int		*words_len;

	if (!s)
		return (NULL);
	tab_size = count_words(s, c);
	words_len = malloc(tab_size * sizeof(int));
	if (!words_len)
		return (NULL);
	count_words_len(s, c, words_len);
	result = alloc_words(tab_size, words_len);
	free(words_len);
	if (!result)
		return (NULL);
	fill_tab(s, c, result);
	return (result);
}

/* #include <stdio.h>
int	main(void)
{
	char	tab[] = {"bonjour"};
	char	c = 'o';
	char	**result;
	int		i;

	result = ft_split(tab, c);
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
} */
