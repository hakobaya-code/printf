/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 07:04:39 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/17 10:40:44 by hakobaya         ###   ########.fr       */
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
int	ft_printf(const char *fmt, ...)
{
	int		d;
	va_list	args;
	va_list	args2;
	char	c;
	char	*s;

	va_start(args, fmt);
	va_copy(args2, args);
	while (*fmt++)
	{
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == 's')
				ft_putstr_all(fmt, va_arg(args, const char *));
			if (*fmt == 'c' || *fmt == '%')
				ft_putchar_all(fmt, va_arg(args, char));
			else if (*fmt == 'd' || *fmt == 'i' || *fmt == 'u' || *fmt == 'x' || *fmt == 'X')
				ft_putnbr_all(fmt, va_arg(args, int));
			else if (*fmt == 'p')
				ft_putpointer();
			else
				break ;
		}
	}
	va_end(args);
	return (0); //returnで何返すか調べる
}

//void	foo(char *fmt, ...)
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

#include <stdio.h>

int	main(void)
{
	const char	*str = "Hello World";
	printf("%s\n", "Hello World");
	printf("%x\n", "agj"); // error??
	printf("%x\n", -12345);
	printf("%X\n", 12345);
	printf("%X\n", -12345);
	//ft_printf(str);
	return (0);
}
