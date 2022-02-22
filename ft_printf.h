/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhamlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:31:03 by lkhamlac          #+#    #+#             */
/*   Updated: 2021/12/06 11:38:20 by lkhamlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int				ft_treat_char(va_list arg);
void			ft_putnbr(long int n);
void			ft_putchar_fd(char c, int fd);
int				ft_treat_char(va_list arg);
int				ft_treat_int(va_list arg);
int				ft_countnumber(long int n);
int				ft_countnumber1(unsigned int n);
int				ft_treat_string(va_list arg);
int				ft_printf(const char *str, ...);
int				ft_flags(va_list args, const char *str, int i);
int				ft_strlen(char *str);
void			ft_putstr(char *str);
int				ft_lenhex(unsigned int n);
int				ft_treat_hex(va_list arg, char *base);
void			ft_print_hex(unsigned int n, char *base);
unsigned int	ft_num_len(unsigned	int num);
char			*ft_uitoa(unsigned int n);
unsigned int	ft_print_unsigned(unsigned int n);
int				ft_treat_unsigned(va_list arg);
void			ft_putnbr1(unsigned int n);
int				ft_printstr(char *str);
int				ft_lenptr(unsigned long int n);
void			ft_print_ptr(unsigned long int n, char *base);
int				ft_treat_ptr(va_list arg, char *base);
int				ft_treat_perc(void);

#endif
