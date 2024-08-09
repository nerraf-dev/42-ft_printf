/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:27:04 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/02 14:20:31 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_utoa(unsigned int n)
{
	char			*str;
	unsigned int	num;
	int				length;

	num = n;
	length = 0;
	if (num == 0)
		length = 1;
	while (num)
	{
		length++;
		num /= 10;
	}
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!(str))
		return (NULL);
	str[length] = '\0';
	while (length--)
	{
		str[length] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
