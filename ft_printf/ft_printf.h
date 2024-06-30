/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:20:31 by sfarren           #+#    #+#             */
/*   Updated: 2024/06/30 14:27:23 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"


int		ft_printf(const char *str, ...);
char	*ft_putnbr_base_fd(unsigned long n, char *base);
char	*ft_utoa(unsigned int n);
char	*ft_strchr(const char *s, int c);
// int		ft_printchr_fd(char c, int fd);
// int		ft_printstr_fd(char *s, int fd);


#endif
