/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhamlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:02:46 by lkhamlac          #+#    #+#             */
/*   Updated: 2021/12/06 11:27:26 by lkhamlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenhex(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

void	ft_print_hex(unsigned int n, char *base)
{
	if (n > 15)
		ft_print_hex(n / 16, base);
	ft_putchar_fd(base[n % 16], 1);
}

int	ft_treat_hex(va_list arg, char *base)
{
	unsigned int	n;

	n = va_arg(arg, unsigned int);
	ft_print_hex(n, base);
	return (ft_lenhex(n));
}
