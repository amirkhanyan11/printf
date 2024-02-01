/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:01:15 by aamirkha          #+#    #+#             */
/*   Updated: 2024/02/01 22:03:18 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putptr(unsigned long long const nbr, char const *const base)
{
	size_t	base_length;

	base_length = ft_strlen(base);
	if (nbr < base_length)
		return (printnb(nbr, base));
	return (ft_putptr(nbr / base_length, base)
		+ ft_putptr(nbr % base_length, base));
}

int ft_putptrprep(unsigned long long const ptr)
{
	if (!ptr)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x")
		+ ft_putptr(ptr, "0123456789abcdef"));
}
