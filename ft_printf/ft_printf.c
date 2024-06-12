/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:17:50 by sfarren           #+#    #+#             */
/*   Updated: 2024/06/12 13:41:25 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "./libft/libft.h"
#include <stdio.h>
/*

Initialize a counter to keep track of the number of characters printed.
Start iterating through the format string.
If the current character is not '%', print it and increment the counter.
If the current character is '%', check the next character.
If the next character is a valid format specifier, use the corresponding function to print the argument and increment the counter by the number of characters printed.
If the next character is not a valid format specifier, print the '%' and the character, and increment the counter by 2.
Continue until the end of the format string.
Return the counter

*/
/*
•%c Prints a single character.
•%s Prints a string (as defined by the common C convention).
•%p The void * pointer argument has to be printed in hexadecimal format.
•%d Prints a decimal (base 10) number.
•%i Prints an integer in base 10.
•%u Prints an unsigned decimal (base 10) number.
•%x Prints a number in hexadecimal (base 16) lowercase format.
•%X Prints a number in hexadecimal (base 16) uppercase format.
•%% Prints a percent sign.
*/
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		print_counter;

	print_counter = 0;
	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			print_counter++;
			i++;
		}
		else
		{
			i++;
			if (format[i] == '%')  // Add this case to handle '%%'
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
				int len;

				len = ft_strlen(va_arg(args, char *));
				ft_putstr_fd(va_arg(args, char *), 1);
				print_counter = print_counter + len;
				i++;
			}
			else if (format[i] == 'i')
			{
				
			}
			// Add more cases for other format specifiers
		}
	}
	va_end(args);
	return (print_counter);
}

int	main(void)
{
	ft_printf("ft: %%age test");
	printf("%%age test");
	ft_printf("ft: Favourite letter: %c", 'c');
	printf("Favourite letter: %c", 'c');
	ft_printf("Hello, %s!", "world");
	printf("Hello, %s!", "world");

	return (0);
}
