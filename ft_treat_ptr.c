/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhamlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:29:10 by lkhamlac          #+#    #+#             */
/*   Updated: 2021/12/06 11:32:04 by lkhamlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	ft_lenptr(unsigned long int n)
{
	unsigned long int	len;

	len = 2;
	if (n == 0)
		return (3);
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

void	ft_print_ptr(unsigned long int n, char *base)
{
	if (n > 15)
		ft_print_ptr(n / 16, base);
	ft_putchar_fd(base[n % 16], 1);
}

int	ft_treat_ptr(va_list arg, char *base)
{
	unsigned long int	n;

	write(1, "0x", 2);
	n = va_arg(arg, unsigned long int);
	ft_print_ptr(n, base);
	return (ft_lenptr(n));
}
