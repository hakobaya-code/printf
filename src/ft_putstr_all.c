/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:09:25 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/17 10:09:36 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar(const char c)
{
	write(1, &c, 1);
}

void	ft_putstr(const char *str)
{
	int	check;

	while (*str)
	{
		check = ft_isalnum(*str);
		if (check == 1 || )
			write(1, str, 1);
		else if (*str == '+')
			write(1, '+', 1);
		else if (*str == '-')
			write(1, '-', 1);
		else
			return ; //error
		str++;
	}
}

void	ft_putstr_all(const char *fmt, ...)
{
	if (*fmt == '\'' || *fmt == '\"')
	{
		fmt++;
		if (*fmt == 's')
			ft_putstr();
		if (*fmt == 'c')
			ft_putchar();
		if (*fmt == '%')
			write(1, '%', 1);
	}
	else
		return ;
}
