/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaniyuhi <otaniyuhi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:41:18 by otaniyuhi         #+#    #+#             */
/*   Updated: 2024/11/25 20:53:58 by otaniyuhi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putchar(int i);
int		ft_putstr(char *str);
size_t	numlen(unsigned long long ull, int base);
char	*itoa_ull(unsigned long long ull, int base, char sign);
int		putnbr(unsigned long long ull, int base, char sign);
int		minus_flag(int n);
int		identify_type(char c, va_list ap);
int		ft_printf(const char *format, ...);

#endif