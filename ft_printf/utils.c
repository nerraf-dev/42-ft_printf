/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:32:19 by sfarren           #+#    #+#             */
/*   Updated: 2024/06/30 14:39:11 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchr_fd(char c, int fd)
{
	if (write(fd, &c, 1) == -1)
		return (-1);
	return (1);
}

int	ft_printstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (write(fd, &s[i], 1) == -1)
			return (-1);
		i++;
	}
	return (i);
}

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
		if (ft_printchr_fd('-', fd) == -1)
			return (-1);
		n *= -1;
	}
	if (n >= 10)
		if (ft_printnbr_fd(n / 10, fd) == -1)
			return (-1);
	c = (n % 10) + '0';
	if (ft_printchr_fd(c, fd) == -1)
		return (-1);
	return (0);
}

