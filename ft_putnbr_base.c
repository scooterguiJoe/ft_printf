/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:01:20 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/28 16:15:58 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int nbr, int base)
{
	int	count;
	char	mod;

	count = 0;
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr *= -1;
		count++;
	}
	if (nbr >= 0)
		count += ft_putnbr_base(nbr / base, base);
	mod = (nbr % base) + 48;
	write(1, &mod, 1);
	count++;
	return (count);
}