/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:20:31 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/16 17:15:39 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "./libft/libft.h"
//TODO: DELETE THIS and all refs to printf()
#include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_putnbr_base(unsigned int n, char *base);
char	*ft_utoa(unsigned int n);
void	ft_printchr(char c, int *count);
int		ft_printnbr(int n);
void	ft_printstr(char *s, int *count);
void	ft_printptr(unsigned long long *ptr, int *count);
int		ft_printhex(int n, char c);
int		ft_printu(unsigned int n);
// int		parse_fstring(const char *str, va_list args);
// int		get_next(const char *str, int i);
// libft
char	*ft_strchr(const char *s, int c);

#endif
