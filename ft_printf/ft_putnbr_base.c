/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 12:33:24 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/15 10:30:20 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int	ft_nbrlen(unsigned long n, int base_len)
// {
// 	int	len;

// 	len = 1;
// 	if (n == 0)
// 		return (1);
// 	while (n >= (unsigned long)base_len)
// 	{
// 		n /= base_len;
// 		len++;
// 	}
// 	return (len);
// }

// Validates if the base string is valid for conversion.
static int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (!base || ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// Converts a number to a string based on the specified base.
int	ft_putnbr_base(unsigned long long n, char *base)
{
	int		base_len;
	int		counter;
	char	c;

	if (!is_valid_base(base))
		return (-1);

	base_len = 0;
	while (base[base_len])
		base_len++;
	counter = 0;
	if (n >= (unsigned long long)base_len)
		counter += ft_putnbr_base(n / base_len, base);
	c = base[n % base_len];
	if (ft_printchr(c) == -1)
		return (-1);
	return (counter + 1);
}
