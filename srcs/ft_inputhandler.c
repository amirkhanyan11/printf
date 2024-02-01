/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputhandler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:35:46 by aamirkha          #+#    #+#             */
/*   Updated: 2024/02/02 02:49:17 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_input_handler(int const tmp, const char *const str)
{
	if (tmp != InvalidInput)
		return (tmp);
	return (ft_putchar(*str));
}
