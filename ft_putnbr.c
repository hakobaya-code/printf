/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:04:33 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/25 06:58:22 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long nbr, int *len)
{
	int		rem;

	if (nbr < 0)
	{
		ft_putchar('-', len);
		nbr *= -1;
	}
	rem = nbr % 10;
	if (nbr / 10 != 0)
		ft_putnbr(nbr / 10, len);
	rem = rem + '0';
	ft_putchar(rem, len);
}
