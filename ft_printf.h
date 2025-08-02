/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:17:37 by wedos-sa          #+#    #+#             */
/*   Updated: 2025/08/02 14:32:51 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar_i(int c);
int	ft_putstr_i(char *s);
int	ft_putnbr_i(int i);
int	ft_puthex_i_lower(unsigned int n);
int	ft_puthex_i_upper(unsigned int n);
int	ft_printf(const char *str, ...);
int	ft_selec_hex(unsigned int n, const char *s);
int	ft_print_address_i(unsigned long long n);
int	ft_unsignednbr_i(unsigned int n);
int	ft_output(const char *str, va_list args);

#endif
