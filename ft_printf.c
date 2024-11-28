/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:20:10 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/28 17:58:54 by guvascon         ###   ########.fr       */
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
	if (format[i] == '%')
	{
		i++;
		count += ft_print_format(format[i], args);
	}
	else
		count += write(1, &format[i], 1);
	i++;
	va_end(args);
	return (count);
}

// int main()
// {
// 	char *p;

// 	p = NULL;
// 	ft_printf(" NULL %s NULL \n", p);
// 	printf(" NULL %s NULL \n", p);
// }