/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 07:05:28 by hakobaya          #+#    #+#             */
/*   Updated: 2023/06/17 10:36:57 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *fmt, ...);
int		ft_atoi(const char *str);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_toupper(int c);
void	ft_putnbr_base(int nbr);
void	ft_putstr(const char *fmt, ...);
void	ft_putchar(const char c);
void	ft_putstr_all(const char *fmt, ...);
void	ft_putnbr(int n);
void	ft_putchar_all(const char *fmt, ...);

#endif