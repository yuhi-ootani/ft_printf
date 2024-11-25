/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaniyuhi <otaniyuhi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:41:30 by otaniyuhi         #+#    #+#             */
/*   Updated: 2024/11/25 20:56:54 by otaniyuhi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int i)
{
	char	c;

	c = (char)i;
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	count;
	int	err;

	count = 0;
	if (!str)
		str = "(null)";
	while (str[count])
	{
		err = write(1, &str[count], 1);
		if (count == INT_MAX || err == -1)
			return (-1);
		count++;
	}
	return (count);
}

int	identify_type(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
		count += putnbr(va_arg(ap, uintptr_t), 16, 'p');
	else if (c == 'd' || c == 'i')
		count += minus_flag(va_arg(ap, int));
	else if (c == 'u')
		count += putnbr(va_arg(ap, unsigned int), 10, '+');
	else if (c == 'x')
		count += putnbr(va_arg(ap, unsigned int), 16, '+');
	else if (c == 'X')
		count += putnbr(va_arg(ap, unsigned int), 16, 'X');
	else if (c == '%')
		count += write(1, "%", 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		tmp;
	int		i;

	count = 0;
	i = 0;
	va_start(ap, format);
	while (format[i])
	{
		tmp = 0;
		if (format[i] == '%' && format[i + 1])
			tmp += identify_type(format[++i], ap);
		else if (!(format[i] == '%' && format[i + 1] == '\0'))
			tmp += write(1, &format[i], 1);
		if (tmp == -1 || count > INT_MAX - tmp)
		{
			va_end(ap);
			return (-1);
		}
		count += tmp;
		i++;
	}
	va_end(ap);
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	// char *nul = NULL;
// 	// int n = -42;
// 	// int *ptr = &n;
// 	// printf("aaaaa%z", "aaa");
// 	// ft_printf("%");
// 	printf("%d\n", ft_printf("a%zb", "aaa"));
// 	printf("%d\n", printf("a%zb", "aaa"));
// 	return (0);
// }