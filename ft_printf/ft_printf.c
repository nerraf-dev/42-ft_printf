/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:17:50 by sfarren           #+#    #+#             */
/*   Updated: 2024/06/25 12:34:39 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

static int	int_length(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	if (n == 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	int				i;
	int				print_counter;
	int				len;
	int				n;
	char			*str;
	unsigned int	m;
	char 			*unsigned_str;

	print_counter = 0;
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			print_counter++;
			i++;
		}
		else
		{
			i++;
			if (format[i] == '%')
			{
				ft_putchar_fd('%', 1);
				print_counter++;
				i++;
			}
			else if (format[i] == 'c')
			{
				ft_putchar_fd(va_arg(args, int), 1);
				print_counter++;
				i++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					{
						ft_putstr_fd("(null)", 1);
						print_counter += 6;
					}
				else
				{
					len = ft_strlen(str);
					ft_putstr_fd(str, 1);
					print_counter += len;
				}
				i++;
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				n = va_arg(args, int);
				len = int_length(n);
				ft_putnbr_fd(n, 1);
				print_counter = print_counter + len;
				i++;
			}
			else if (format[i] == 'u')
			{
				m = va_arg(args, unsigned int);
				unsigned_str = ft_utoa(m);
				if (unsigned_str)
				{
					ft_putstr_fd(unsigned_str, 1);
					print_counter += ft_strlen(unsigned_str);
					free(unsigned_str);
				}
				i++;
			}
			else if (format[i] == 'x')
			{
				m = va_arg(args, unsigned int);
				unsigned_str = ft_putnbr_base_fd(m, "0123456789abcdef");
				print_counter += ft_strlen(unsigned_str);
				ft_putstr_fd(unsigned_str, 1);
				free(unsigned_str);
				i++;
			}
			else if (format[i] == 'X')
			{
				m = va_arg(args, unsigned int);
				unsigned_str = ft_putnbr_base_fd(m, "0123456789ABCDEF");
				print_counter += ft_strlen(unsigned_str);
				ft_putstr_fd(unsigned_str, 1);
				free(unsigned_str);
				i++;
			}
			else if (format[i] == 'p')
			{
				m = va_arg(args, unsigned int);
				ft_putstr_fd("0x", 1);
				unsigned_str = ft_putnbr_base_fd(m, "0123456789abcdef");
				print_counter = print_counter + 2 + ft_strlen(unsigned_str);
				ft_putstr_fd(unsigned_str, 1);
				free(unsigned_str);
				i++;
			}
			else
				i++;
		}
	}
	va_end(args);
	return (print_counter);
}


