/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 09:36:40 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/08/01 19:21:39 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_output(const char *str, va_list args)
{
	if (*str == '%')
	{
		ft_putchar_i('%');
		return (1);
	}
	else if (*str == 'c')
	{
		ft_putchar_i(va_arg(args, int));
		return (1);
	}
	else if (*str == 's')
		return (ft_putstr_i(va_arg(args, char *)));
	else if (*str == 'd' || *str == 'i')
		return (ft_putnbr_i(va_arg(args, int)));
	else if (*str == 'x' || *str == 'X')
		return (ft_selection_hex(va_arg(args, unsigned long long), str));
	else if (*str == 'p')
		return (ft_print_address_i((unsigned long long)va_arg(args, void *)));
	else
		return (ft_putchar_i('%') + ft_putchar_i(*str));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '\0')
				return (count);
			count += ft_output(str, args);
		}
		else
		{
			ft_putchar_i(*str);
			count++;
		}
		str++;
	}
	return (count);
}
