/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 08:32:26 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/15 08:40:26 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printu(unsigned int n)
{
	char	*str;
	int		count;

	str = ft_utoa(n);
	if (!str)
		return (-1);
	count = ft_printstr(str);
	free(str);
	return (count);
}
