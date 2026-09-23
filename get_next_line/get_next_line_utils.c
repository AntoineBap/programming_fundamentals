/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-28 08:37:33 by abaptist          #+#    #+#             */
/*   Updated: 2026-05-28 08:37:33 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strndup(char *s, int n)
{
	char	*samestr;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	samestr = malloc(sizeof(char) * (n + 1));
	if (samestr == NULL)
		return (NULL);
	i = 0;
	while (s[i] && i < n)
	{
		samestr[i] = s[i];
		i++;
	}
	samestr[i] = '\0';
	return (samestr);
}

char	*ft_strdup(char *s)
{
	char	*samestr;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	samestr = malloc(sizeof(char) * (i + 1));
	i = 0;
	if (samestr == NULL)
		return (NULL);
	while (s[i])
	{
		samestr[i] = s[i];
		i++;
	}
	samestr[i] = '\0';
	return (samestr);
}

char	*ft_strchr(char *s, int c)
{
	int				i;
	unsigned char	ch;

	i = 0;
	ch = (unsigned char)c;
	while (s[i])
	{
		if ((unsigned char)s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*strjoin;
	int		i;
	int		j;

	if (!s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	i = 0;
	j = 0;
	strjoin = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!strjoin)
		return (NULL);
	while (s1[i])
	{
		strjoin[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		strjoin[i + j] = s2[j];
		j++;
	}
	strjoin[i + j] = '\0';
	return (strjoin);
}
