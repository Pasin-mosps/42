/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadsara <psadsara@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:49:32 by psadsara          #+#    #+#             */
/*   Updated: 2024/02/16 15:03:28 by psadsara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;

	dst_ptr = dst;
	src_ptr = src;
	if (!dst && !src)
		return (NULL);
	if (dst_ptr > src_ptr)
	{
		while (len--)
		{
			dst_ptr[len] = src_ptr[len];
		}
	}
	else
	{
		while (len--)
		{
			*dst_ptr++ = *src_ptr++;
		}
	}
	return (dst);
}
