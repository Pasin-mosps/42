/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadsara <psadsara@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:49:08 by psadsara          #+#    #+#             */
/*   Updated: 2024/02/16 16:08:27 by psadsara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_ptr;

	s_ptr = s;
	while (n > 0)
	{
		if (*s_ptr == (unsigned char )c)
			return ((void *)s_ptr);
		s_ptr++;
		n--;
	}
	return (NULL);
}
