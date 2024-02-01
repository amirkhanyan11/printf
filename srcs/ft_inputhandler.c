/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputhandler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:35:46 by aamirkha          #+#    #+#             */
/*   Updated: 2024/02/01 19:50:28 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_InputHandler(int const tmp, const char * const str)
{
	if (tmp != InvalidInput)
		return (tmp);
	return (ft_putchar(*str));
}
