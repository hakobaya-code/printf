/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 07:04:39 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/17 20:12:46 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// printする種類　cspdiuxX%
//• %c Prints a single character.
//• %s Prints a string (as defined by the common C convention).
//• %p The void * pointer argument has to be printed in hexadecimal format.
//• %d Prints a decimal (base 10) number.
//• %i Prints an integer in base 10.
//• %u Prints an unsigned decimal (base 10) number.
//• %x Prints a number in hexadecimal (base 16) lowercase format.
//• %X Prints a number in hexadecimal (base 16) uppercase format.
//• %% Prints a percent sign.

//引数の部分最後戻す

static int	ft_printf_type(const char *fmt, int digit, va_list args)
{
	char	*base;
	char	*base_upper;

	base = "0123456789abcdef";
	base_upper = "0123456789ABCDEF";
	if (*fmt == 's')
		digit = ft_putstr(va_arg(args, const char *));
	else if (*fmt == 'c')
		digit = ft_putchar(va_arg(args, int));
	else if (*fmt == '%')
		digit = ft_putchar(va_arg(args, int));
	else if (*fmt == 'd' || *fmt == 'i')
		digit = ft_putnbr(va_arg(args, int));
	else if (*fmt == 'u')
		digit = ft_putnbr(va_arg(args, unsigned long));
	else if (*fmt == 'p')
		digit = ft_putpointer(va_arg(args, unsigned long), base);
	else if (*fmt == 'x')
		digit = ft_putnbr_base(va_arg(args, unsigned long), base);
	else if (*fmt == 'X')
		digit = ft_putnbr_base(va_arg(args, unsigned long), base_upper);
	else
		return (-1);
	return (digit);
}

int	ft_printf(const char *fmt, ...)
{
	int		digit;
	va_list	args;

	va_start(args, fmt);
	digit = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			digit += ft_printf_type(fmt, digit, args);
			fmt++;
		}
		write(1, fmt, 1);
		fmt++;
		digit++;
	}
	digit += ft_putchar('\n');
	va_end(args);
	return (digit);
}

//void	foo(chqar *fmt, ...)
//{
//	int	d;

//	va_list , 2;
//	char c, *s;
//	va_start(, fmt);
//	va_copy(2, );
//	while (*fmt)
//		switch (*fmt++)
//		{
//		case 's': /* string */
//			s = va_arg(, char *);
//			printf("string %s\n", s);
//			break ;
//		case 'd': /* int */
//			d = va_arg(, int);
//			printf("int %d\n", d);
//			break ;
//		case 'c': /* char */
//			/* Note: char is promoted to int. */
//			c = va_arg(, int);
//			printf("char %c\n", c);
//			break ;
//		}
//	va_end();
//	...
//		/* use 2 to iterate over the arguments again */
//		... va_end(2);
//}

//#include <stdio.h>

//int	main(void)
//{
//	const char	*str;

//	str = "Hello World";
//	printf("printf string %s\n", "Hello World");
//	ft_printf("ft_printf string %s\n", "Hello World");
//	printf("printf char %c\n", '#');
//	ft_printf("ft_printf_char %c\n", '#');
//	printf("printf d %d\n", -123456789);
//	ft_printf("ft_printf d %d\n", -123456789);
//	printf("printf i %i\n", 1234523456);
//	ft_printf("ft_printf i %i\n", 1234523456);
//	printf("printf u %u\n", 987654321);
//	ft_printf("ft_printf u %u\n", 987654321);
//	printf("printf x %x\n", 2345);
//	ft_printf("ft_printf x %x\n", 2345);
//	printf("printf X %X\n", 1234);
//	ft_printf("ft_printf X %X\n", 1234);
//	return (0);
//}
