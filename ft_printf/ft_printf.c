/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:17:50 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/16 16:35:58 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


// int	ft_printf(const char *format, ...)
// {
// 	va_list			args;
// 	int				print_counter;

// 	print_counter = 0;
// 	va_start(args, format);
// 	print_counter = parse_fstring(format, args);
// 	va_end(args);
// 	return (print_counter);
// }

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		counter;

	i = 0;
	counter = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			counter += format_handler(str[i + 1], args);
			i++;
		}
		else
			counter += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (counter);
}
