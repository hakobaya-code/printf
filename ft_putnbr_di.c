/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:33:44 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/25 14:04:49 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_di(int nbr, int *len)
{
	long	num;
	int		rem;

	num = (long)nbr;
	if (num < 0)
	{
		ft_putchar('-', len);
		num *= -1;
	}
	rem = num % 10;
	if (num / 10 != 0)
		ft_putnbr_di(num / 10, len);
	rem = rem + '0';
	ft_putchar(rem, len);
}
