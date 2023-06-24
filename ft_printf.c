/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 07:04:39 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/25 07:50:38 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_type(const char *fmt, int *len, va_list args)
{
	char	*base;
	char	*base_upper;

	base = "0123456789abcdef";
	base_upper = "0123456789ABCDEF";
	if (*fmt == 's')
		ft_putstr(va_arg(args, const char *), len);
	else if (*fmt == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (*fmt == '%')
		ft_putchar('%', len);
	else if (*fmt == 'd' || *fmt == 'i')
		ft_putnbr_di(va_arg(args, int), len);
	else if (*fmt == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), len);
	else if (*fmt == 'p')
		ft_putpointer(va_arg(args, unsigned long), base, len);
	else if (*fmt == 'x')
		ft_putnbr_base(va_arg(args, int), base, len);
	else if (*fmt == 'X')
		ft_putnbr_base(va_arg(args, int), base_upper, len);
	else
		return (-1);
	return (*len);
}

int	ft_printf(const char *fmt, ...)
{
	int		len;
	va_list	args;

	va_start(args, fmt);
	len = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			ft_printf_type(fmt, &len, args);
			fmt++;
		}
		else
		{
			ft_putchar(*fmt, &len);
			fmt++;
		}
	}
	va_end(args);
	return (len);
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
//	//const char	*str;
//	int			count1;
//	int			count2;

//	//str = "Hello World";
//	printf("-------------------------------------------\n\n\n");
//	count1 = printf("printf1 %s\n", "Hello World");
//	count2 = ft_printf("printf2 %s\n", "Hello World");
//	printf("count1 %d count2 %d\n", count1, count2);
//	printf("-------------------------------------------\n\n\n");
//	count1 = printf("printf1 %s\n", NULL);
//	count2 = ft_printf("printf2 %s\n", NULL);
//	printf("count1 %d count2 %d\n", count1, count2);
//	printf("-------------------------------------------\n\n\n");
//	//count1 = printf("printf1 %c\n", '#');
//	//count2 = ft_printf("printf2 %c\n", '#');
//	//printf("count1 %d count2 %d\n", count1, count2);
//	//printf("-------------------------------------------\n\n\n");
//	//count1 = printf("printf1 d %d\n", -123456789);
//	//count2 = ft_printf("printf2 d %d\n", -123456789);
//	//printf("count1 %d count2 %d\n", count1, count2);
//	//printf("-------------------------------------------\n\n\n");
//	//count1 = printf("printf1 i %i\n", 1234523456);
//	//count2 = ft_printf("printf2 i %i\n", 1234523456);
//	//printf("count1 %d count2 %d\n", count1, count2);
//	//printf("-------------------------------------------\n\n\n");
//	//count1 = printf("printf1 u %u\n", 987654321);
//	//count2 = ft_printf("printf2 u %u\n", 987654321);
//	//printf("count1 %d count2 %d\n", count1, count2);
//	//printf("-------------------------------------------\n\n\n");
//	//count1 = printf("printf1 x %x\n", 2345);
//	//count2 = ft_printf("printf2 x %x\n", 2345);
//	//printf("count1 %d count2 %d\n", count1, count2);
//	//printf("-------------------------------------------\n\n\n");
//	//count1 = printf("printf1 X %X\n", 1234);
//	//count2 = ft_printf("printf2 X %X\n", 1234);
//	//printf("count1 %d count2 %d\n", count1, count2);
//	//printf("-------------------------------------------\n\n\n");
//	//count1 = printf("printf1 pct %%%%%%\n");
//	//count2 = ft_printf("printf2 pct %%%%%%\n");
//	//printf("count1 %d count2 %d\n", count1, count2);
//	//printf("-------------------------------------------\n\n\n");
//	//count1 = printf("printf1 u %u\n", INT_MAX);
//	//count2 = ft_printf("printf2 u %u\n", INT_MAX);
//	//printf("count1 %d count2 %d\n", count1, count2);
//	//printf("-------------------------------------------\n\n\n");
//	//count1 = printf("printf1 x %x\n", LONG_MAX);
//	//count2 = ft_printf("printf2 x %x\n", LONG_MAX);
//	//printf("count1 %d count2 %d\n", count1, count2);
//	//printf("-------------------------------------------\n\n\n");
//	//count1 = printf("printf1 x %x\n", LONG_MIN);
//	//count2 = ft_printf("printf2 x %x\n", LONG_MIN);
//	//printf("count1 %d count2 %d\n", count1, count2);
//	//printf("-------------------------------------------\n\n\n");
//	//count1 = printf("printf1 x %x\n", INT_MAX);
//	//count2 = ft_printf("printf2 x %x\n", INT_MAX);
//	//printf("count1 %d count2 %d\n", count1, count2);
//	//printf("-------------------------------------------\n\n\n");
//	//count1 = printf("printf1 x %x\n", -1);
//	//count2 = ft_printf("printf2 x %x\n", -1);
//	//printf("count1 %d count2 %d\n", count1, count2);
//	//printf("-------------------------------------------\n\n\n");
//	//count1 = printf("printf1 p %p\n", INT_MIN);
//	//count2 = ft_printf("printf2 p %p\n", INT_MIN);
//	//printf("count1 %d count2 %d\n", count1, count2);
//	//printf("-------------------------------------------\n\n\n");
//	//count1 = printf("printf1 p %p\n", LONG_MIN);
//	//count2 = ft_printf("printf2 p %p\n", LONG_MIN);
//	//printf("count1 %d count2 %d\n", count1, count2);
//	//printf("-------------------------------------------\n\n\n");
//	//count1 = printf("printf1 p %p\n", -1);
//	//count2 = ft_printf("printf2 p %p\n", -1);
//	//printf("count1 %d count2 %d\n", count1, count2);
//	//printf("-------------------------------------------\n\n\n");
//	return (0);
//}
