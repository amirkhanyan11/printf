/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:36:08 by aamirkha          #+#    #+#             */
/*   Updated: 2024/02/01 02:26:55 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_parcer(char c, va_list arglist)
{
	if (c == 'd')
		return ft_putnbr(va_arg(arglist, int));
	else if (c == 'c')
		return ft_putchar(va_arg(arglist, int));
	else if (c == 's')
		return (ft_putstr(va_arg(arglist, char *)));
	return 0;
}
