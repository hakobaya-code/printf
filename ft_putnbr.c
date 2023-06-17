/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:04:33 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/17 19:28:34 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int nbr)
{
	long	num;
	int		rem;
	int		digit;

	digit = 1;
	num = (long)nbr;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
		digit++;
	}
	rem = num % 10;
	if (num / 10 != 0)
		ft_putnbr(num / 10);
	rem = rem + '0';
	digit++;
	ft_putchar(rem);
	return (digit);
}
