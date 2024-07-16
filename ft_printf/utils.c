/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:13:23 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/16 17:12:06 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	format_handler(const char c, va_list args, int *count)
{
	if (c == 'd' || c == 'i')
		ft_printnbr(va_arg(args, int));
	else if (c == 's')
		ft_printstr(va_arg(args, char *), &count);
	else if (c == 'c')
		ft_printchr(va_arg(args, int), &count);
	else if (c == '%')
		ft_printchr('%', &count);
	else if (c == 'x' || c == 'X')
		ft_printhex(va_arg(args, int), c);
	else if (c == 'u')
		ft_printu(va_arg(args, unsigned int));
	else if (c == 'p')
		ft_printptr(va_arg(args, void *));
	else
		*count = -1;
}

// int	parse_fstring(const char *str, va_list args)
// {
// 	int	i;
// 	int	count;
// 	int	print_count;

// 	i = 0;
// 	print_count = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] != '%')
// 		{
// 			count = ft_printchr(str[i]);
// 			i++;
// 		}
// 		else
// 		{
// 			count = format_handler(str[i + 1], args);
// 			i += 2;
// 		}
// 		if (count == -1)
// 			return (-1);
// 		else
// 			print_count += count;
// 	}
// 	return (print_count);
// }
