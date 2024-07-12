/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:11:25 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/12 16:43:47 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	char	c;
	int		count;

	count = 0;
	if (n == -2147483648)
	{
		if (ft_printstr("-2147483648") == -1)
			return (-1);
		return (11);
	}
	if (n < 0)
	{
		if (ft_printchr('-') == -1)
			return (-1);
		n *= -1;
		count++;
	}
	if (n >= 10)
		if (ft_printnbr(n / 10) == -1)
			return (-1);
	c = (n % 10) + '0';
	if (ft_printchr(c) == -1)
		return (-1);
	count++;
	return (count);
}