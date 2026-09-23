/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-24 13:35:05 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-24 13:35:05 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	if (!s)
		return (NULL);
	dup = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/* #include <stdio.h>
int	main(void)
{
	int		i;
	char	*s;
	char	*dup;

	i = 0;
	s = "";
	dup = ft_strdup(s);
	while (dup[i])
	{
		printf("%c", dup[i]);
		i++;
	}
	free(dup);
	dup = 0;
	return (0);
} */