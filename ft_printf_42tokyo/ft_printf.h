/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:28:47 by yichinos          #+#    #+#             */
/*   Updated: 2022/11/09 20:48:56 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdint.h>
# include <limits.h>
# include <stdarg.h>

int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_put_u_nbr(unsigned int n);
int	ft_putnbr_big_sixteen(uintptr_t x);
int	ft_putnbr_small_sixteen(uintptr_t x);
int	ft_putadrs(uintptr_t a);
int	ft_vfprintf(const char *format, va_list ap, int *done);
int	ft_printf(const char *format, ...);

#endif
