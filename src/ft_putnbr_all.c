/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:19:16 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/17 10:43:25 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

ft_putnbr_di(va_list args)
{
	ft_atoi(args);
}

ft_putnbr_u(va_list args)
{
	ft_atoi(args);
}

ft_putnbr_x(va_list args)
{
	int	num;

	if (*str == '-')
	{
		ft_putpointer(args);
		return ;
	}
	num = ft_atoi(args);
	ft_putnbr_normal();
}

ft_putnbr_X(va_list args)
{
	int	num;

	if (*str == '-')
	{
		ft_toupper(ft_putpointer());
		return ;
	}
	num = ft_atoi();
	ft_putnbr_normal();
}

ft_putnbr_all(const char *fmt, va_list args)
{
	if (*fmt == 'd' || *fmt == 'i')
		ft_putnbr_di(args);
	if (*fmt == 'u')
		ft_putnbr_u(args);
	if (*fmt == 'x' || *fmt == 'X')
		ft_putnbr_16(args);
	else
		return ;
}

//else if (*fmt == 'd' || *fmt == 'i' || *fmt == 'u' || *fmt == 'x'
		|| *fmt == 'X')
//• %d Prints a decimal (base 10) number.
//• %i Prints an integer in base 10.
//• %u Prints an unsigned decimal (base 10) number.
//• %x Prints a number in hexadecimal (base 16) lowercase format.
//• %X Prints a number in hexadecimal (base 16) uppercase format.