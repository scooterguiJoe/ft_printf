/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:20:02 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/29 17:40:49 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

# define LWCASE "0123456789abcdef"
# define UPCASE "0123456789ABCDEF"

//int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
void	ft_putnbr(int n);
int	ft_putstr(char *str);
int	ft_putnbr_base(long nbr, char *base);
static int	ft_print_format(char special, va_list *args);
int	ft_strlen(const char *str);
int	ft_print_pointer(unsigned long ptr);

#endif