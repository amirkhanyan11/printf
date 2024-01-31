/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:24:57 by aamirkha          #+#    #+#             */
/*   Updated: 2024/02/01 02:15:48 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_printf(char const *str, ...)
{
	int	plength;
	va_list	arglist;

	va_start(arglist, str);
	plength = 0;
	while (*str)
	{
		if (*str == '%')
			plength += ft_parcer(*((str++) + 1), arglist);
		else
			plength += ft_putchar(*(str));
		str++;
	}
	va_end(arglist);
	return (plength);
}
