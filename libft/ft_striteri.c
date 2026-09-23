/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-30 12:27:21 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-30 12:27:21 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/* void	to_upper(unsigned int i, char *c)
{
	(void) i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

void	to_lower(unsigned int i, char *c)
{
	(void) i;
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

void	char_star(unsigned int i, char *c)
{
	(void) i;
	*c = '*';
}

#include <stdio.h>
int	main(void)
{
	char s1[] = "hello";
	ft_striteri(s1, to_upper);
	printf("%s (attendu: HELLO)\n", s1);

	char s2[] = "HELLO";
	ft_striteri(s2, to_lower);
	printf("%s (attendu: hello)\n", s2);

	char s3[] = "abcde";
	ft_striteri(s3, char_star);
	printf("%s (attendu: *****)\n", s3);

	char s4[] = "";
	ft_striteri(s4, to_upper);
	printf("%s (attendu: )\n", s4);

	return (0);
} */
