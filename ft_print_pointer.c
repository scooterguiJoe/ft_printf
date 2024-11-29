/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:10:41 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/29 17:34:27 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long ptr)
{
	int	count;
	char	base;

	count = 0;
	if (!ptr)
		write(1, "(nil)", 5);
	count += ft_putstr("0x");
	count += ft_putnbr_base(ptr, &base);
	count++;
	return (count);
}
// int main()
// {
//    // char *i = "asdasdas";
// 	printf("%p\n", NULL);
// }
//quando for Null escrever nil
//imprimir 0x
//passar unsigned putnbrbase