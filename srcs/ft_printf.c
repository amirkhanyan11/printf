/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:24:57 by aamirkha          #+#    #+#             */
/*   Updated: 2024/02/02 02:49:15 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_printf(char const *str, ...)
{
	int		plength;
	int		tmp;
	va_list	arglist;

	va_start(arglist, str);
	plength = 0;
	while (*str)
	{
		if (*str == '%')
		{
			tmp = ft_parcer(*((str++) + 1), arglist);
			plength += ft_input_handler(tmp, str);
		}
		else
			plength += ft_putchar(*(str));
		str++;
	}
	va_end(arglist);
	return (plength);
}
