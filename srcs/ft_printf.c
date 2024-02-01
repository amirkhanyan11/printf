/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:24:57 by aamirkha          #+#    #+#             */
/*   Updated: 2024/02/01 20:33:38 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

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
