/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:36:08 by aamirkha          #+#    #+#             */
/*   Updated: 2024/02/02 02:49:20 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	printnb(int nb, char const *const base)
{
	return (write(1, base + nb, 1));
}

int	ft_putnbr(unsigned int const nbr, char const *const base)
{
	size_t	base_length;

	base_length = ft_strlen(base);
	if (nbr < base_length)
		return (printnb(nbr, base));
	return (ft_putnbr(nbr / base_length, base)
		+ ft_putnbr(nbr % base_length, base));
}

int	ft_putnbr_signed(long long n)
{
	if (n < 0)
		return (ft_putchar('-') + ft_putnbr(-n, "0123456789"));
	return (ft_putnbr(n, "0123456789"));
}
