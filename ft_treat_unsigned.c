/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhamlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:20:11 by lkhamlac          #+#    #+#             */
/*   Updated: 2021/12/06 11:33:26 by lkhamlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr1(unsigned int n)
{
	if (n <= 9)
	{
		ft_putchar_fd((n + '0'), 1);
	}
	else
	{
		ft_putnbr1(n / 10);
		ft_putnbr1(n % 10);
	}
}

int	ft_countnumber1(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

int	ft_treat_unsigned(va_list arg)
{
	unsigned int	i;

	i = va_arg(arg, unsigned int);
	ft_putnbr1(i);
	return (ft_countnumber(i));
}
