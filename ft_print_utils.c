/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:23:17 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/07/31 16:58:49 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putchar_i(int  c)
{
    write(1, &c, 1);
    return(1);
}

int ft_putstr_i(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
        write(1, &s[i], 1);
        i++;
	}
    return (i);
}

int ft_putnbr_i(int n)
{
    char    *nb;
    int     count;

    count = 0;
    nb = ft_itoa(n);
    count = ft_putstr_i(nb);
    free(nb);
    return (count);
}
