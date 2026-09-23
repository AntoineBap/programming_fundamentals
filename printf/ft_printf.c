/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-12 09:20:37 by abaptist          #+#    #+#             */
/*   Updated: 2026-05-12 09:20:37 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int	ft_putchar(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	return (write(1, &ch, 1));
}

int	ft_pointer(void *p)
{
	int			count;
	uintptr_t	n;

	if (!p)
		return (write(1, "(nil)", 5));
	n = (uintptr_t)p;
	count = 0;
	count += write(1, "0x", 2);
	count += ft_putnbr_ptr(n);
	return (count);
}

int	printer_conversion(const char *p, va_list args)
{
	if (*p == 'c')
		return (ft_putchar((char)va_arg(args, int)));
	else if (*p == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (*p == 'd' || *p == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (*p == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	else if (*p == 'x')
		return (ft_putnbr_hexa_lower(va_arg(args, unsigned int)));
	else if (*p == 'X')
		return (ft_putnbr_hexa_upper(va_arg(args, unsigned int)));
	else if (*p == 'p')
		return (ft_pointer(va_arg(args, void *)));
	else if (*p == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			count;
	int			i;

	va_start(args, format);
	count = 0;
	i = 0;
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
			count += write(1, &format[i], 1);
		else
		{
			i++;
			if (format[i])
				count += printer_conversion(&format[i], args);
		}
		i++;
	}
	va_end(args);
	return (count);
}
/* #include <stdio.h>
int	main()
{
	int				a = 42;
	int				b = -42;
	unsigned int	u = 4242424242;

	ft_printf("Result ft_printf (c): Char %c !\n", 'L');
	printf("Result printf (c): Char %c !\n", 'L');

	ft_printf("\n");

	ft_printf("Result ft_printf (s): String %s !\n", "");
	printf("Result printf (s): String %s !\n", "");

	ft_printf("\n");

	ft_printf("Result ft_printf (d): Decimal %d !\n", a);
	ft_printf("Result ft_printf (d): Decimal %d !\n", -2147483648);
	printf("Result printf (d): Decimal %d !\n", a);
	printf("Result printf (d): Decimal %ld !\n", -2147483648);

	ft_printf("\n");

	ft_printf("Result ft_printf (i): Int %i !\n", a);
	ft_printf("Result ft_printf (i): Int %i !\n", b);
	printf("Result printf (i): Int %i !\n", a);
	printf("Result printf (i): Int %i !\n", b);

	ft_printf("\n");

	ft_printf("Result ft_printf (u): Unsigned int %u !\n", u);
	ft_printf("Result ft_printf (u): Unsigned int %u !\n", (unsigned int) b);
	printf("Result printf (u): Unsigned int %u !\n", u);
	printf("Result printf (u): Unsigned int %u !\n", (unsigned int) b);

	ft_printf("\n");

	ft_printf("Result ft_printf (x): Hex Lower %x !\n", a);
	ft_printf("Result ft_printf (x): Hex Lower %x !\n", u);
	printf("Result printf (x): Hex Lower %x !\n", a);
	printf("Result printf (x): Hex Lower %x !\n", u);

	ft_printf("\n");

	ft_printf("Result ft_printf (X): Hex Upper %X !\n", a);
	ft_printf("Result ft_printf (X): Hex Upper %X !\n", u);
	printf("Result printf (X): Hex Upper %X !\n", a);
	printf("Result printf (X): Hex Upper %X !\n", u);

	ft_printf("\n");

	ft_printf("Result ft_printf (p): Pointer %p !\n", NULL);
	printf("Result printf (p): Pointer %p !\n", NULL);

	ft_printf("\n");

	ft_printf("Result ft_printf (%%): Percent %% !\n");
	printf("Result printf (%%): Percent %% !\n");
	return 0;
	} */
