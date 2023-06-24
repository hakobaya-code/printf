/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:07:20 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/25 07:46:32 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_base_2(unsigned int nbr, char *base, int *len)
{
	unsigned int	size;

	size = 16;
	if (nbr / size != 0)
	{
		ft_putnbr_base_2(nbr / size, base, len);
		nbr = nbr % size;
	}
	ft_putchar(base[nbr], len);
}

void	ft_putnbr_base(unsigned int nbr, char *base, int *len)
{
	if (nbr == 0)
	{
		ft_putchar('0', len);
	}
	else
		ft_putnbr_base_2(nbr, base, len);
}

//#include <stdio.h>

//int	main(void)
//{
//	char	*base = "0123456789abcdef";
//	char	*base_upper = "0123456789ABCDEF";

//	ft_putnbr(123456);
//	printf("%x\n", 31234567);
//	ft_putnbr_base(31234567, base);
//}
