/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:25:53 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/14 18:17:25 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	res = ft_printhex((unsigned long)ptr, 'x');
	if (res == -1)
	{
		ft_printstr("0");
		return (print_counter + 1);
	}

	return (print_counter + res);
}

