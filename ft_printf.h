/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:20:57 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/08/01 19:23:25 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar_i(int c);
int	ft_putstr_i(char *s);
int	ft_putnbr_i(int i);
int	ft_puthex_i_lower(unsigned long long n);
int	ft_puthex_i_upper(unsigned long long n);
int	ft_printf(const char *str, ...);
int	ft_selection_hex(unsigned long long n, const char *s);
int	ft_print_address_i(unsigned long long n);

#endif
