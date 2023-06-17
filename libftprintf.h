/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 07:05:28 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/17 19:53:40 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *fmt, ...);
int		ft_putchar(int c);
int		ft_putstr(const char *str);
int		ft_putnbr_base(unsigned long nbr, char *base);
int		ft_putnbr(int nbr);
int		ft_putpointer(unsigned long address, char *base);

#endif