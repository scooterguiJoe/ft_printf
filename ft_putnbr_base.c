/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:27:33 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/26 17:20:12 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int nbr, char *base)
{
	int	count;
	char	mod;

	count = 0;
	while (base[count])
		count++;
	if (count < 2)
		return (0);
}	