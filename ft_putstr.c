/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:03:29 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/17 18:53:09 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(const char *str)
{
	int	digit;

	digit = 0;
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
		digit++;
	}
	return (digit);
}
