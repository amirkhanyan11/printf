/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:36:08 by aamirkha          #+#    #+#             */
/*   Updated: 2024/02/01 02:04:50 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putnbr(long long n)
{
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n < 10)
		return (ft_putchar(n + '0'));
	return (ft_putnbr((n / 10)) + ft_putnbr((n % 10)));
}

int	ft_putstr(char *s)
{
	if (!s)
		return 0;
	return (write(1, s, ft_strlen(s)));
}

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
