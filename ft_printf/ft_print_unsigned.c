/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadsara <psadsara@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-31 15:18:56 by psadsara          #+#    #+#             */
/*   Updated: 2024-03-31 15:18:56 by psadsara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_unsigned(unsigned int n)
{
	int count;
	count = 0;
	char buffer[11];
	int	i;
	i = 0;

	if (n == 0)
		return ft_print_char('0');
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}

	while (i > 0)
	{
		count += ft_print_char(buffer[--i]);
	}
	return (count);
}
