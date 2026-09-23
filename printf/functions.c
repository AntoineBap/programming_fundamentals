/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-12 09:20:25 by abaptist          #+#    #+#             */
/*   Updated: 2026-05-12 09:20:25 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_putnbr_unsigned(n / 10);
	n = n % 10 + '0';
	count += write(1, &n, 1);
	return (count);
}

int	ft_putnbr_hexa_lower(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_hexa_lower(n / 16);
	count += write(1, &"0123456789abcdef"[n % 16], 1);
	return (count);
}

int	ft_putnbr_hexa_upper(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_hexa_upper(n / 16);
	count += write(1, &"0123456789ABCDEF"[n % 16], 1);
	return (count);
}

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (n < 0)
	{
		count += write(1, "-", 1);
		count += ft_putnbr(-n);
		return (count);
	}
	if (n > 9)
		count += ft_putnbr(n / 10);
	n = n % 10 + '0';
	count += write(1, &n, 1);
	return (count);
}

int	ft_putnbr_ptr(uintptr_t n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_ptr(n / 16);
	count += write(1, &"0123456789abcdef"[n % 16], 1);
	return (count);
}
