/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:07:20 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/17 20:13:38 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_putnbr_base_2(unsigned long nbr, int size, char *base)
{
	int	digit;

	digit = 1;
	if (nbr > (unsigned long)size)
	{
		ft_putnbr_base_2(nbr / size, size, base);
		nbr = nbr % size;
		digit++;
	}
	ft_putchar(base[nbr]);
	return (digit);
}

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int	size;
	int	digit;

	digit = 0;
	if (nbr == 0)
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (1);
	}
	size = 16;
	digit = ft_putnbr_base_2(nbr, size, base);
	ft_putchar('\n');
	return (digit);
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
