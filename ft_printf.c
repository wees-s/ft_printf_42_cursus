/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 09:36:40 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/31 17:16:03 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

int	ft_output(const char *str, va_list args)
{
    if (*str == '%')
        ft_putchar_i('%');
    else if (*str == 'c')
        ft_putchar_i(va_arg(args, int));
    else if (*str == 's')
        return (ft_putstr_i(va_arg(args, char *)));
    else if (*str == 'd')
        return (ft_putnbr_i(va_arg(args, int)));
    else if (*str == 'i')
        return (ft_putnbr_i(va_arg(args, int)));
    /*
    else if (str[index + 1] == 'x')
        return (ft_puthexa_i_lower(va_arg(args, int)));
    else if (str[index + 1] == 'x')
        return (ft_puthexa_i_lower(va_arg(args, int)));
        */
    return (1);
}
int	ft_printf(const char *str, ...)
{
    int     count;
    va_list args;

    va_start(args, str);
    count = 0;
	while(*str)
    {
        if (*str == '%')
        {
            str++;
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
