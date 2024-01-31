/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:01:50 by aamirkha          #+#    #+#             */
/*   Updated: 2024/02/01 01:52:54 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

int ft_printf(char const *str, ...);
int ft_parcer(char c, va_list arglist);
int	ft_putnbr(long long n);
int	ft_putchar(char c);

#endif // FT_PRINTF_H
