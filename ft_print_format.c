/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:43:57 by guvascon          #+#    #+#             */
/*   Updated: 2024/12/02 16:47:43 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_format(char specifier, va_list *args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(*args, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(*args, char *));
	else if (specifier == 'p')
		count += ft_print_pointer(va_arg(*args, unsigned long), LWCASE, 0);
	else if (specifier == 'd')
		count += ft_putnbr_base(va_arg(*args, int), DEC);
	else if (specifier == 'i')
		count += ft_putnbr_base(va_arg(*args, int), DEC);
	else if (specifier == 'u')
		count += ft_putnbr_base(va_arg(*args, unsigned int), DEC);
	else if (specifier == 'x')
		count += ft_putnbr_base(va_arg(*args, unsigned int), LWCASE);
	else if (specifier == 'X')
		count += ft_putnbr_base(va_arg(*args, unsigned int), UPCASE);
	else if (specifier == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(specifier);
	count++;
	return (count);
}
