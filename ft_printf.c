/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:20:10 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/27 16:23:10 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!format)
		return (0);
	va_start(args, format);
	if (format == '%')
	{
		i++;
		count += ft_print_format(format[i], args);
	}
	else
		count += write(1, format[i], 1);
	i++;
	va_end(args);
	return (count);
}