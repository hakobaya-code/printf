/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:35:39 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/17 10:37:03 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar(const char c)
{
	write(1, &c, 1);
}

void	ft_putchar_all(const char *fmt, ...)
{
	if (*fmt == '\'' || *fmt == '\"')
	{
		fmt++;
		if (*fmt == 'c')
			ft_putchar();
		if (*fmt == '%')
			write(1, '%', 1);
		return ;
	}
	else
		return ;
}
