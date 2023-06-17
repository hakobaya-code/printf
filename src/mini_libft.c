/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:04:32 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/17 10:20:16 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isalnum(char c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
			&& c <= 'Z'));
}

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

void	ft_putnbr(int n)
{
	long	num;
	long	rem;
	char	minus;

	num = (long)n;
	minus = '-';
	if (num < 0)
	{
		write(fd, &minus, 1);
		num *= -1;
	}
	rem = num % 10;
	if (num / 10 != 0)
		ft_putnbr_fd(num / 10, fd);
	rem = rem + '0';
	write(fd, &rem, 1);
}