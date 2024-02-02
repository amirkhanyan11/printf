/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputhandler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:35:46 by aamirkha          #+#    #+#             */
/*   Updated: 2024/02/02 18:21:34 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_input_handler(int const tmp, const char *const str)
{
	if (tmp != InvalidInput)
		return (tmp);
	return (ft_putchar(*str));
}
