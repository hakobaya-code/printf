/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:08:12 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/25 14:04:55 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int nbr, int *len)
{
	int		rem;

	if (nbr > UINT_MAX)
		nbr = UINT_MAX;
	rem = nbr % 10;
	if (nbr / 10 != 0)
		ft_putnbr_u(nbr / 10, len);
	rem = rem + '0';
	ft_putchar(rem, len);
}
