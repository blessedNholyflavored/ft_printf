/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhamlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:13:10 by lkhamlac          #+#    #+#             */
/*   Updated: 2021/12/06 11:39:23 by lkhamlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_flags(va_list args, const char *str, int i)
{
	int	count;

	count = 0;
	if (str[i] == 'c')
		count += ft_treat_char(args);
	if (str[i] == 's')
		count += ft_treat_string(args);
	if (str[i] == 'i' || str[i] == 'd')
		count += ft_treat_int(args);
	if (str[i] == 'x')
		count += ft_treat_hex(args, "0123456789abcdef");
	if (str[i] == 'X')
		count += ft_treat_hex(args, "0123456789ABCDEF");
	if (str[i] == 'u')
		count += ft_treat_unsigned(args);
	if (str[i] == 'p')
		count += ft_treat_ptr(args, "0123456789abcdef");
	if (str[i] == '%')
		count += ft_treat_perc();
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
			count += write(1, &str[i], 1);
		else
			count += ft_flags(args, str, ++i);
		i++;
	}
	va_end(args);
	return (count);
}
