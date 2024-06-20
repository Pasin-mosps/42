/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadsara <psadsara@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-31 15:18:42 by psadsara          #+#    #+#             */
/*   Updated: 2024-03-31 15:18:42 by psadsara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	int	count;
	count = 0;
	char buffer[12];
	int	i;
	i = 0;
	int	is_negative;
	is_negative = 0;

	if (n == 0)
		return ft_print_char('0');
		if (n == INT_MIN)
	{
		return (ft_print_str("-2147483648"));
	}
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
		buffer[i++] = '-';
	while (i > 0)
	{
		count += ft_print_char(buffer[--i]);
	}
	return (count);
}
