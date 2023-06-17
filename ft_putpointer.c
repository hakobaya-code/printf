/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:23:23 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/17 19:29:01 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putpointer(unsigned long address, char *base)
{
	int	digit;

	digit = ft_putnbr_base(address, base);
	return (digit);
}
