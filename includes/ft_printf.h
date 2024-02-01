/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:01:50 by aamirkha          #+#    #+#             */
/*   Updated: 2024/02/01 20:36:41 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

typedef enum e_InputType
{
	InvalidInput = -1,
	ValidInput = 0
}	t_InputType;

int	ft_printf(char const *str, ...);
int	ft_parcer(char c, va_list arglist);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(unsigned int const nbr, char const *const base);
int	ft_putnbr_signed(long long n);
int	printnb(int nb, char const *const base);
int	ft_putptr(unsigned long long const nbr, char const *const base);
int	ft_input_handler(int const tmp, const char *const str);

//int	ft_putptr(unsigned long long const nbr, char const * const base);

#endif // FT_PRINTF_H
