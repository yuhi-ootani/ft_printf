/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaniyuhi <otaniyuhi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:53:46 by otaniyuhi         #+#    #+#             */
/*   Updated: 2024/11/25 20:53:47 by otaniyuhi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// void	print_address(void *ptr)
// {
// 	uintptr_t	address;

// 	// Cast the pointer to uintptr_t for proper formatting
// 	address = (uintptr_t)ptr;
// 	// Print the address in the desired format
// 	printf("0x%lu\n", address);
// }

// int	main(void)
// {
// 	int	a;

// 	a = 42;
// 	print_address(&a); // This will print the address of 'a' in 0xff format
// 	return (0);
// }

// int	main(void)
// {
// 	unsigned int	x;
// 	int				*ptr;
// 	int				**ptr_to_ptr;

// 	x = 2147483648;
// 	ptr = &x;
// 	ptr_to_ptr = &ptr;
// 	printf("%p", ptr);
// 	// printf("Address of x: %u\n", x);
// 	// x = -2147483649;
// 	x = -1;
// 	// printf("Address of x: %u\n", x);
// 	// printf("Value of ptr (address of x): %llu\n", (unsigned long long)ptr);
// 	// printf("Value of ptr (address of x): %p\n", (void *)ptr);
// 	// printf("Address of ptr: %p\n", (void *)&ptr);
// 	// printf("Value of ptr_to_ptr (address of ptr): %p\n", (void *)ptr_to_ptr);
// 	return (0);
// }
// size_t	numlen(unsigned long long ull, int base)
// {
// 	size_t	len;

// 	len = 0;
// 	if (ull == 0)
// 		return (1);
// 	while (ull > 0)
// 	{
// 		len++;
// 		ull /= base;
// 	}
// 	return (len);
// }

// char	*itoa_ull(unsigned long long ull, int base)
// {
// 	const char	base_char[16] = "0123456789abcdef";
// 	size_t		len;
// 	char		*str;

// 	len = numlen(ull, base);
// 	str = (char *)malloc(len + 1);
// 	if (!str)
// 		return (NULL);
// 	str[len] = '\0';
// 	if (ull == 0)
// 		str[0] = '0';
// 	while (ull)
// 	{
// 		str[--len] = base_char[ull % base];
// 		ull /= base;
// 	}
// 	return (str);
// }

// int	putnbr(unsigned long long ull, int base, char sign)
// {
// 	int		count;
// 	char	*str;

// 	count = 0;
// 	if (sign == '-')
// 		count += write(1, "-", 1);
// 	else if (sign == 'p')
// 		count += write(1, "0x", 2);
// 	str = itoa_ull(ull, base);
// 	if (!str)
// 		return (-1);
// 	count = write(1, str, numlen(ull, base));
// 	free(str);
// 	return (count);
// }

// int	main(void)
// {
// 	// putnbr(15, 16, '+');
// 	long long ull = 9223372036854775807;
// 	printf("answer = %x\n", ull);
// 	putnbr((unsigned int)ull, 16, '+');
// 	return (0);
// }