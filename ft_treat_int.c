/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhamlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:51:56 by lkhamlac          #+#    #+#             */
/*   Updated: 2021/12/06 11:29:03 by lkhamlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countnumber(long int n)
{
	long int	i;
	long		nb;

	i = 0;
	nb = n;
	if (n <= 0)
	{
		nb = -nb;
		i++;
	}
	while (nb > 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

int	ft_treat_int(va_list arg)
{
	int	i;

	i = va_arg(arg, int);
	ft_putnbr(i);
	return (ft_countnumber(i));
}
