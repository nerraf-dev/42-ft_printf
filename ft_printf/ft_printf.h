/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:20:31 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/17 10:15:00 by sfarren          ###   ########.fr       */
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
# include <stdio.h>

# define DECIMAL "0123456789"
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

int		ft_printf(const char *str, ...);
void	ft_printnbr_base(long long n, char *base, int *count);
char	*ft_utoa(unsigned int n);
void	ft_printchr(char c, int *count);
void	ft_printstr(char *s, int *count);
void	ft_printptr(void *ptr, int *count);
// int		ft_printhex(int n, char c);
// int		ft_printu(unsigned int n);
// int		parse_fstring(const char *str, va_list args);
// int		get_next(const char *str, int i);
// libft
char	*ft_strchr(const char *s, int c);

#endif
