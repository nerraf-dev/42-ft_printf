/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:25:53 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/17 10:12:44 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int	put_ptr(unsigned long long n)
// {
// 	unsigned long long		base_len;
// 	int						counter;
// 	char					c;
// 	char					*base;

// 	base_len = 16;
// 	counter = 0;
// 	base = "0123456789abcdef";
// 	if (n >= base_len)
// 		counter += put_ptr(n / base_len);
// 	c = base[n % base_len];
// 	if (ft_printchr(c) == -1)
// 		return (-1);
// 	return (counter + 1);
// }

void	ft_printptr(void *ptr, int *count)
{
	unsigned long long	n;

	n = (unsigned long long)ptr;
	ft_printstr("0x", count);
	if (n >= 16)
	{
		ft_printnbr_base(n / 16, HEX_LOWER, count);
		ft_printnbr_base(n % 16, HEX_LOWER, count);
	}
	else
	{
		ft_printchr(HEX_LOWER[n], count);
	}
}
