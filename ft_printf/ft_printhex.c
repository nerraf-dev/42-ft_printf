/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:09:50 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/15 10:10:46 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_printhex(unsigned long long n, char c)
{
	char	*base;
	int		counter;

	counter = 0;
	base = "0123456789ABCDEF";
	if (c == 'x')
		base = "0123456789abcdef";
	counter = ft_putnbr_base(n, base);
	if (!counter)
		return (-1);
	return (counter);
}
