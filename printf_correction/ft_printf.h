/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:05:37 by abaptist          #+#    #+#             */
/*   Updated: 2026-05-18 12:05:37 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <inttypes.h>

int	ft_putstr(char *str);
int	ft_putchar(int c);
int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putnbr_hexa_lower(unsigned int n);
int	ft_putnbr_hexa_upper(unsigned int n);
int	printer_conversion(const char *p, va_list args);
int	ft_putnbr_ptr(uintptr_t n);
int	ft_printf(const char *format, ...);

#endif
