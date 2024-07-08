/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:20:31 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/08 08:37:25 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

int		ft_printf(const char *str, ...);
char	*ft_putnbr_base(unsigned long n, char *base);
char	*ft_utoa(unsigned int n);
char	*ft_strchr(const char *s, int c);
int		ft_printchr(char c);
int		ft_printnbr_fd(int n, int fd);
int		ft_printstr_fd(char *s, int fd);
// int		format_check(va_list args, const char format);

#endif
