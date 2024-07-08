/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:11:25 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/08 08:37:45 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		if (ft_printstr_fd("-2147483648", fd) == -1)
			return (-1);
		return (0);
	}
	if (n < 0)
	{
		if (ft_printchr('-') == -1)
			return (-1);
		n *= -1;
	}
	if (n >= 10)
		if (ft_printnbr_fd(n / 10, fd) == -1)
			return (-1);
	c = (n % 10) + '0';
	if (ft_printchr(c) == -1)
		return (-1);
	return (0);
}
