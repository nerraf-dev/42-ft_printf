/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:18:46 by sfarren           #+#    #+#             */
/*   Updated: 2024/07/15 13:47:32 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchr(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
	// ssize_t result;

	// result = write(1, &c, 1);
	// if (result == -1)
	// {
	// 	perror("write failed");
	// 	return (-1);
	// }
	// return (1);
}
