/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:01:50 by aamirkha          #+#    #+#             */
/*   Updated: 2024/02/02 18:49:37 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <libft.h>
# include <stdarg.h>

typedef enum e_InputType
{
	InvalidInput = -1
}	t_InputType;

int	ft_printf(char const *str, ...);
int	ft_parcer(char c, va_list arglist);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(unsigned int const nbr, char const *const base);
int	ft_putnbr_signed(long long n);
int	ft_input_handler(int const tmp, const char *const str);
int	ft_putptrprep(unsigned long long const ptr);

#endif // FT_PRINTF_H
