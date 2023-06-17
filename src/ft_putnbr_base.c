/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:07:20 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/17 10:22:32 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_base_2(long num, int size, char *base)
{
	long	nbr_final[50];
	int		i;

	i = 0;
	if (num != 0)
	{
		while (num)
		{
			nbr_final[i] = num % size;
			num = num / size;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nbr_final[i]]);
	}
	else
		ft_putchar(base[0]);
}

void	ft_putnbr_base(int nbr)
{
	char	*base;
	int		size;
	int		i;
	long	num;

	i = 0;
	base = (char *)malloc(sizeof(char) * 17);
	while (i < 17)
	{
		base[i] = i - '0';
		i++;
	}
	base[i] = '\0';
	size = 16;
	num = nbr;
	if (num < 0)
	{
		num = num * (-1);
		ft_putchar('-');
	}
	ft_putnbr_base_2(num, size, base);
}
