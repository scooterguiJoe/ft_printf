/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:01:20 by guvascon          #+#    #+#             */
/*   Updated: 2024/12/02 16:48:08 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_base(long nbr, char *base)
{
	int		count;
	char	mod;

	count = 0;
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
		count++;
	}
	if (nbr >= ft_strlen(base))
	{
		count += ft_putnbr_base(nbr / ft_strlen(base), base);
		count += ft_putnbr_base(nbr % ft_strlen(base), base);
	}
	else
	{
		mod = base[nbr];
		write (1, &mod, 1);
	}
	count++;
	return (count);
}
// int main()
// {
// 	int count;

// 	count = 0;
//     count += ft_putnbr_base(-42, UPCASE);
//     write(1, "\n", 1);
// }