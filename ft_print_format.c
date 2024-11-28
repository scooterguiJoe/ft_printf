/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:43:57 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/28 17:54:35 by guvascon         ###   ########.fr       */
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
		count +=
	else if (special == 'd')

	else if (special == 'i')

	else if (special == 'u')

	else if (special == 'x')
	
	else if (special == 'X')

	else if (special == '%')
		count += ft_putchar(special);
}
