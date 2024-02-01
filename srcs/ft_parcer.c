/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:36:08 by aamirkha          #+#    #+#             */
/*   Updated: 2024/02/01 19:42:11 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_parcer(char c, va_list arglist)
{
	if (c == 'd' || c == 'i')
		return ft_putnbr_signed(va_arg(arglist, int));
	else if (c == 'c')
		return ft_putchar(va_arg(arglist, int));
	else if (c == 's')
		return (ft_putstr(va_arg(arglist, char *)));
	else if (c == 'x')
		return (ft_putnbr(va_arg(arglist, int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_putnbr(va_arg(arglist, int), "0123456789ABCDEF"));
	else if (c == 'u')
		return (ft_putnbr(va_arg(arglist, int), "0123456789"));
	else if (c == 'p')
		return (ft_putstr("0x") + ft_putptr(va_arg(arglist, long long), "0123456789abcdef"));
	return -1;
}
// ft_putstr("0x") + ft_putnbr(va_arg(arglist, int), "0123456789abcdef")
