/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadsara <psadsara@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-31 15:18:54 by psadsara          #+#    #+#             */
/*   Updated: 2024-03-31 15:18:54 by psadsara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_str(char *str)
{
    int len;
    
    if (!str)
        str = "(null)";
    len = ft_strlen(str);
    write(1, str, len);
    return len;
}
 