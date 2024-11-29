/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:43:57 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/29 17:40:37 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_format(char special, va_list *args)
{
	int	count;

	count = 0;
	if (special == 'c')
		count += ft_putchar(va_arg(*args, int));
	else if (special == 's')
		count += ft_putstr(va_arg(*args, char *));
	else if (special == 'p')
		count += ft_print_pointer((unsigned long)va_arg(*args, void *));
	else if (special == 'd')
		count += ft_putnbr_base((long)va_arg(*args, int), 10);
	else if (special == 'i')
		count += ft_putnbr_base((long)va_arg(*args, int), 10);
	else if (special == 'u')
		count += ft_putnbr_base(va_arg(*args, unsigned int), 10);
	else if (special == 'x')
		count += ft_putnbr_base((long)va_arg(*args, unsigned int), LWCASE);
	else if (special == 'X')
		count += ft_putnbr_base((long)va_arg(*args, unsigned int), UPCASE);
	else if (special == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(special);
	count++;
	return (count);
}
