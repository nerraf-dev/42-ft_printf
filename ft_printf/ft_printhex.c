/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:09:50 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/15 15:53:03 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_printhex(int n, char c)
{
	char			*base;
	int				counter;
	unsigned int	num;

	counter = 0;
	base = "0123456789ABCDEF";
	num = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	if (n < 0)
		num = (unsigned int)(-n);
	else
		num = (unsigned int)n;
	counter = ft_putnbr_base(n, base);
	if (!counter)
		return (-1);
	return (counter);
}
