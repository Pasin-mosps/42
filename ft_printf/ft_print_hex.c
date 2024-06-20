/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lower_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadsara <psadsara@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-31 15:18:49 by psadsara          #+#    #+#             */
/*   Updated: 2024-03-31 15:18:49 by psadsara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_hex(unsigned long n, int uppercase)
{
    char *base = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
    char buffer[17];
    int i = 15;

    buffer[16] = '\0';
    if (n == 0)
        return ft_print_char('0');
    while (n > 0)
    {
        buffer[i--] = base[n % 16];
        n /= 16;
    }
    return ft_print_str(&buffer[i + 1]);
}
