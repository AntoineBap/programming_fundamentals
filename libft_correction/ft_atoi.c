/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-23 09:19:37 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-23 09:19:37 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int (i) = 0;
	int (sign) = 1;
	int (result) = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}

/* #include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char	nptr1[] = "    \n\v\t---++1234ab567";
	char	nptr2[] = "    \t--12x34ab567";
	char	nptr3[] = " -1234ab567";

	printf("%d\n", ft_atoi(nptr1));
	printf("%d\n", ft_atoi(nptr2));
	printf("%d\n", ft_atoi(nptr3));
	printf("\n");
	printf("%d\n", atoi(nptr1));
	printf("%d\n", atoi(nptr2));
	printf("%d\n", atoi(nptr3));
	return (0);
} */