/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:17:50 by sfarren           #+#    #+#             */
/*   Updated: 2024/06/04 18:44:04 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
/*
** ft_printf - print formatted output
** @str: format string
** @...: arguments
**
** Return: number of characters printed
- Count number of arguments
- Initialize the va_list
- Iterate through the format string
- Print characters until a '%' is found
- increment counter for each character printed
- Get the next character after the '%
- Check if it is a valid conversion specifier
- If it is, print the corresponding argument
- If it is not, print the '%' and the character
- Return the number of characters printed
External functs. malloc, free, write,
va_start, va_arg, va_copy, va_end
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
int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		print_counter;
	char	*str;

	print_counter = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			print_counter++;
			//
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	ft_printf("Hello, %s!\n", "world");
	return (0);
}
