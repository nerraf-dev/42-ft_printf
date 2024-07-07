/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:13:23 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/07 15:58:54 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_check(va_list args, const char format)
{
	int	print_counter;
	int count;

	print_counter = 0;
	count = 0;
	if (format == 'c')
		count = ft_printchr_fd(va_arg(args, int), 1);
	// else if (format == 's')
	// 	count += ft_printstr(va_arg(args, char *));
	// else if (format == 'p')
	// 	count += ft_print_ptr(va_arg(args, unsigned long long));
	// else if (format == 'd' || format == 'i')
	// 	count += ft_printnbr(va_arg(args, int));
	// else if (format == 'u')
	// 	count += ft_print_unsigned(va_arg(args, unsigned int));
	// else if (format == 'x' || format == 'X')
	// 	count += ft_print_hex(va_arg(args, unsigned int), format);
	// else if (format == '%')
	// 	count += ft_printpercent();
	if (count == -1)
		return (-1);
	else
		print_counter += count;
	return (print_counter);
}
