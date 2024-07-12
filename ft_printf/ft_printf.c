/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:17:50 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/12 18:12:14 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int	int_length(int n)
// {
// 	int	count;

// 	count = 0;
// 	if (n < 0)
// 	{
// 		count++;
// 		n *= -1;
// 	}
// 	if (n == 0)
// 		count = 1;
// 	while (n != 0)
// 	{
// 		n /= 10;
// 		count++;
// 	}
// 	return (count);
// }

int	ft_printf(const char *format, ...)
{
	va_list			args;
	int				print_counter;

	print_counter = 0;
	va_start(args, format);
	print_counter = parse_fstring(format, args);
	va_end(args);
	return (print_counter);
}


