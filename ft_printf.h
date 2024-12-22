/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyuhi <oyuhi@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:41:18 by otaniyuhi         #+#    #+#             */
/*   Updated: 2024/12/22 15:27:46 by oyuhi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

size_t	numlen(unsigned long long ull, int base);
char	*itoa_ull(unsigned long long ull, int base, char sign);
int		putnbr(unsigned long long ull, int base, char sign);
int		minus_flag(int n);
int		handle_ptr(unsigned long long ull);

int		ft_putchar(int i);
int		ft_putstr(char *str);
int		identify_type(char c, va_list ap);
int		ft_printf(const char *format, ...);

#endif