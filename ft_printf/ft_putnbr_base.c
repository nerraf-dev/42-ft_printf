/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 12:33:24 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/02 14:52:00 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbrlen(unsigned long n, int base_len)
{
	int	len;

	len = 1;
	while (n >= (unsigned long)base_len)
	{
		n /= base_len;
		len++;
	}
	return (len);
}

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
char	*ft_putnbr_base(unsigned long n, char *base)
{
	int		base_len;
	int		len;
	char	*str;

	if (!is_valid_base(base))
		return (NULL);
	base_len = ft_strlen(base);
	len = ft_nbrlen(n, base_len);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}
