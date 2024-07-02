/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 12:33:24 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/01 12:33:45 by sfarren          ###   ########.fr       */
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

char	*ft_putnbr_base_fd(unsigned long n, char *base)
{
	int		base_len;
	int		len;
	char	*str;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (NULL);
	len = ft_nbrlen(n, base_len);
	str = malloc(len + 1);
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
