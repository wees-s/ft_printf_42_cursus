/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address_i.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 16:39:45 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/08/01 19:42:47 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_address_i(unsigned long long  n)
{
	char				*hexa;
	unsigned long long	div;
	int					count;

	div = 1;
	hexa = "0123456789abcdef";
	count = 2;
	if (!n)
		return (ft_putstr_i("(nil)"));
	write(1, "0x", 2);
	while (n > 0)
	{
		while (((n / div) > 0) && (div < (n / 16)))
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
