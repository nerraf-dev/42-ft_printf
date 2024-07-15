/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:11:25 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/15 10:48:01 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_neg(int n)
{
	if (ft_printchr('-') == -1)
		return (-1);
	n *= -1;
	return (n);
}

int	handle_min_int(void)
{
	if (ft_printstr("-2147483648") == -1)
		return (-1);
	return (11);
}

int	ft_printnbr(int n)
{
	char	c;
	int		count;
	int		ret;

	count = 0;
	if (n == -2147483648)
		return (handle_min_int());
	if (n < 0)
	{
		n = handle_neg(n);
		if (n == -1)
			return (-1);
		count++;
	}
	if (n >= 10)
	{
		ret = ft_printnbr(n / 10);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	c = (n % 10) + '0';
	if (ft_printchr(c) == -1)
		return (-1);
	count++;
	return (count);
}
