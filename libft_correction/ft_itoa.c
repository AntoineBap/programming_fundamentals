/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-30 10:32:19 by abaptist          #+#    #+#             */
/*   Updated: 2026-04-30 10:32:19 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_size(long nb)
{
	size_t	size;

	size = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		size = 1;
	}
	if (nb == 0)
		size = 1;
	else
	{
		while (nb)
		{
			nb = nb / 10;
			size++;
		}
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	long	nb;
	char	*str;
	int		is_negative;

	size = count_size((long) n);
	str = (char *) malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	nb = (long) n;
	is_negative = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		str[0] = '-';
		is_negative = 1;
	}
	str[size] = '\0';
	while (size > (size_t) is_negative)
	{
		str[size - 1] = nb % 10 + '0';
		nb = nb / 10;
		size--;
	}
	return (str);
}

/* #include <stdio.h> 
#include <stdlib.h>
int main(void)
{
    char *result;

    result = ft_itoa(42);
    printf("%s (attendu: 42)\n", result);
    free(result);

    result = ft_itoa(-42);
    printf("%s (attendu: -42)\n", result);
    free(result);

    result = ft_itoa(0);
    printf("%s (attendu: 0)\n", result);
    free(result);

    result = ft_itoa(2147483647);
    printf("%s (attendu: 2147483647)\n", result);
    free(result);

    result = ft_itoa(-2147483648);
    printf("%s (attendu: -2147483648)\n", result);
    free(result);

    result = ft_itoa(7);
    printf("%s (attendu: 7)\n", result);
    free(result);

    result = ft_itoa(-3);
    printf("%s (attendu: -3)\n", result);
    free(result);

    return (0);
} */