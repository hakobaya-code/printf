/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 20:26:20 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/25 14:06:39 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *fmt, ...);
void	ft_putchar(int c, int *len);
void	ft_putstr(const char *str, int *len);
void	ft_putnbr_base(unsigned int nbr, char *base, int *len);
void	ft_putnbr_di(int nbr, int *len);
void	ft_putnbr_u(unsigned int nbr, int *len);
void	ft_putpointer(unsigned long address, char *base, int *len);

#endif