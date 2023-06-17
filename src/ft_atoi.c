/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 09:45:16 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/17 09:45:46 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"

static long long	over(long long num, const char *next_c, int minus)
{
	int	next;

	next = *next_c - '0';
	if (minus == 1)
	{
		if (LONG_MAX % 10 > next)
			return (num * 10 + next);
		else
			return (LONG_MAX);
	}
	else
	{
		if (LONG_MAX % 10 + 1 > next)
			return ((num * 10 + next) * -1);
		else
			return (LONG_MIN);
	}
	return (num);
}

static const char	*skip(const char *str)
{
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v')
		str++;
	return (str);
}

int	ft_atoi(const char *str)
{
	int			minus;
	long long	num;

	num = 0;
	minus = 1;
	str = skip(str);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (num > LONG_MAX / 10 && minus == 1)
			return ((int)LONG_MAX);
		if (num > LONG_MAX / 10)
			return ((int)LONG_MIN);
		if (num == LONG_MAX / 10)
			return ((int)over(num, str, minus));
		num = num * 10 + (*str - '0');
		str++;
	}
	num = num * minus;
	return ((int)num);
}
