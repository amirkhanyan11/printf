/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:36:08 by aamirkha          #+#    #+#             */
/*   Updated: 2024/02/01 02:28:46 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr(long long n)
{
	int	carry;

	carry = (n < 0);
	if (carry)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n < 10)
		return (ft_putchar(n + '0') + carry);
	return (ft_putnbr((n / 10)) + ft_putnbr((n % 10)) + carry);
}
