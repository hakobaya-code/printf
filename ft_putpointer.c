/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:23:23 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/25 07:47:29 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putpointer_3(unsigned long nbr, char *base, int *len)
{
	unsigned long	size;

	size = 16;
	if (nbr / size != 0)
	{
		ft_putpointer_3(nbr / size, base, len);
		nbr = nbr % size;
	}
	ft_putchar(base[nbr], len);
}

static void	ft_putpointer_2(unsigned long nbr, char *base, int *len)
{
	if (nbr == 0)
	{
		ft_putchar('0', len);
	}
	else
		ft_putpointer_3(nbr, base, len);
}

void	ft_putpointer(unsigned long address, char *base, int *len)
{
	ft_putchar('0', len);
	ft_putchar('x', len);
	ft_putpointer_2(address, base, len);
}
