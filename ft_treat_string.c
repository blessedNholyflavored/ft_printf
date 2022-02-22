/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhamlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:33:45 by lkhamlac          #+#    #+#             */
/*   Updated: 2021/12/06 11:32:39 by lkhamlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_string(va_list arg)
{
	char	*str;

	str = va_arg(arg, char *);
	return (ft_printstr(str));
}
