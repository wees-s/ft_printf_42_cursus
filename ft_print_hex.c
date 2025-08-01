/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 15:07:27 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/08/01 19:45:37 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_selection_hex(unsigned long long n, const char *s)
{
	if (*s == 'x')
		return (ft_puthex_i_lower((unsigned long long)n));
	else if (*s == 'X')
		return (ft_puthex_i_upper((unsigned long long)n));
	return (0);
}

int	ft_puthex_i_lower(unsigned long long n)
{
	char			*hexa;
	unsigned long long	div;
	int				count;

	count = 0;
	div = 1;
	hexa = "0123456789abcdef";
    if (n == 0)
        return(ft_putchar_i('0'));
    while (n > 0)
	{
		while ((n / div) > 0 && div < n / 16)
			div = div * 16;
		if (div > n)
			div = div / 16;
		while (div > 0)
		{
			write(1, &hexa[n / div], 1);
			count++;
			n = n % div;
			div = div / 16;
		}
	}
	return (count);
}

int	ft_puthex_i_upper(unsigned long long n)
{
	char			*hexa;
	unsigned long long	div;
	int				count;

	count = 0;
	div = 1;
	hexa = "0123456789ABCDEF";
    if (n == 0)
        return(ft_putchar_i('0'));
    while (n > 0)
	{
		while ((n / div) > 0 && div < n / 16)
			div = div * 16;
		if (div > n)
			div = div / 16;
		while (div > 0)
		{
			write(1, &hexa[n / div], 1);
			count++;
			n = n % div;
			div = div / 16;
		}
	}
	return (count);
}
