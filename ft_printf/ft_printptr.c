/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:25:53 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/15 13:26:23 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_ptr(unsigned long long n)
{
	unsigned long long		base_len;
	int						counter;
	char					c;
	char					*base;

	base_len = 16;
	counter = 0;
	base = "0123456789abcdef";
	if (n >= base_len)
		counter += put_ptr(n / base_len);
	c = base[n % base_len];
	if (ft_printchr(c) == -1)
		return (-1);
	return (counter + 1);
}

int	ft_printptr(void *ptr)
{
	int	res;
	int	print_counter;

	res = 0;
	// if (ptr && *((char *)ptr) == '\0')
	//  	printf("\nEMPTY STRING POINTER \n");
	if (ft_printstr("0x") == -1)
		return (-1);
	print_counter = 2;
	res = put_ptr((unsigned long)ptr);
	if (res == -1)
	{
		ft_printstr("0");
		return (print_counter + 1);
	}

	return (print_counter + res);
}

