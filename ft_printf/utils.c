/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:13:23 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/12 18:11:48 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_char(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

static int	format_handler(const char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count = ft_printnbr(va_arg(args, int));
	else if (c == 's')
		count = ft_printstr(va_arg(args, char *));
	else if (c == 'c')
		count = ft_printchr(va_arg(args, int));
	else if (c == 'u')
		count = ft_printstr(ft_utoa(va_arg(args, unsigned int)));
	else if (c == 'p')
		count = ft_printptr(va_arg(args, void *));
	return (count);
}

int	parse_fstring(const char *str, va_list args)
{
	int	i;
	int	count;
	int	print_count;

	i = 0;
	print_count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			count = handle_char(str[i]);
			i++;
		}
		else
		{
			count = format_handler(str[i], args);
			i += 2;
		}
		if (count == -1)
			return (-1);
		else
			print_count += count;
	}
	return (print_count);
}
