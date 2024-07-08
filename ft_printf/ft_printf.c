/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:17:50 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/08 08:37:10 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	handle_char(va_list args, int *print_counter)
{
	if (ft_printchr(va_arg(args, int)) == -1)
		return (-1);
	(*print_counter)++;
	return (0);
}

int	handle_string(va_list args, int *print_counter)
{
	char	*str;
	int		len;

	str = va_arg(args, char *);
	if (!str)
	{
		if (ft_printstr_fd("(null)", 1) == -1)
			return (-1);
		*print_counter += 6;
	}
	else
	{
		len = ft_strlen(str);
		if (ft_printstr_fd(str, 1) == -1)
			return (-1);
		*print_counter += len;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	int				i;
	int				print_counter;
	int				len;
	int				n;
	char			*str;
	// int				z;
	// unsigned int	m;
	char 			*unsigned_str;
	void			*ptr;

	print_counter = 0;
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		// Check format[i]
		// If format[i] is not a %, print it
		// If format[i] is a %, check the next character
			// If the next character is a %, print a % and increment i
			// If the next character is a c, print a character and increment i
			// If the next character is a s, print a string and increment i
			// If the next character is a d or i, print an integer and increment i
			// If the next character is a u, print an unsigned integer and increment i
			// If the next character is a x or X, print a hexadecimal number and increment i
			// If the next character is a p, print a pointer and increment i
		// Increment i

		// if (format[i] == '%')
		// {
		// 	print_counter = print_counter + format_check(format, i);
		// }
		if (format[i] != '%')
		{
			if (ft_printchr(format[i]) == -1)
				return (-1);
			print_counter++;
			i++;
		}
		else
		{
			i++;
			if (format[i] == '%')
			{
				if (ft_printstr_fd("%", 1) == -1)
					return (-1);
				print_counter++;
				i++;
			}
			else if (format[i] == 'c')
			{
				if (ft_printchr(va_arg(args, int)) == -1)
					return (-1);
				print_counter++;
				i++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					{
						if (ft_printstr_fd("(null)", 1) == -1)
							return (-1);
						print_counter += 6;
					}
				else
				{
					len = ft_strlen(str);
					if (ft_printstr_fd(str, 1) == -1)
						return (-1);
					print_counter += len;
				}
				i++;
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				n = va_arg(args, int);
				len = int_length(n);
				if (ft_printnbr_fd(n, 1) == -1)
					return (-1);
				print_counter = print_counter + len;
				i++;
			}
			else if (format[i] == 'u')
			{
				// m = va_arg(args, unsigned int);
				unsigned_str = ft_utoa(va_arg(args, unsigned int));
				if (!unsigned_str)
					return (-1);
				if (ft_printstr_fd(unsigned_str, 1) == -1)
				{
					free(unsigned_str);
					return (-1);
				}
				print_counter += ft_strlen(unsigned_str);
				free(unsigned_str);
				i++;
			}
			else if (format[i] == 'x' || format[i] == 'X')
			{
				if (format[i] == 'x')
					unsigned_str = ft_putnbr_base(va_arg(args, unsigned int),
							"0123456789abcdef");
				else
					unsigned_str = ft_putnbr_base(va_arg(args, unsigned int),
							"0123456789ABCDEF");
				if (!unsigned_str)
					return (-1);
				print_counter += ft_strlen(unsigned_str);
				if (ft_printstr_fd(unsigned_str, 1) == -1)
				{
					free(unsigned_str);
					return (-1);
				}
				free(unsigned_str);
				i++;
			}
			else if (format[i] == 'p')
			{
				ptr = va_arg(args, void*);
				if (ft_printstr_fd("0x", 1) == -1)
					return (-1);
				print_counter += 2;
				unsigned_str = ft_putnbr_base((unsigned long)ptr,
						"0123456789abcdef");
				if (!unsigned_str)
					return (-1);
				print_counter += ft_strlen(unsigned_str);
				if (ft_printstr_fd(unsigned_str, 1) == -1)
						return (-1);
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


