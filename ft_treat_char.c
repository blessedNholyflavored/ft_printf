/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhamlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:49:55 by lkhamlac          #+#    #+#             */
/*   Updated: 2021/12/06 11:25:52 by lkhamlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_char(va_list arg)
{
	int	c;

	c = va_arg(arg, int);
	return (write(1, &c, 1));
}
