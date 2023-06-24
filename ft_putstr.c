/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:03:29 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/25 07:50:25 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str, int *len)
{
	const char	*nl;

	nl = "(null)";
	if (str == NULL)
	{
		while (*nl)
		{
			ft_putchar(*nl, len);
			nl++;
		}
	}
	else
	{
		while (*str)
		{
			ft_putchar(*str, len);
			str++;
		}
	}
}
