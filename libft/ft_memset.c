/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadsara <psadsara@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:49:37 by psadsara          #+#    #+#             */
/*   Updated: 2024/02/16 15:03:28 by psadsara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i++] = (unsigned char)c;
	}
	return (b);
}

// int main()
// {
// 	char a[] = "abcde";
// 	char b = '4';

// 	ft_memset(a, b, 5);
// 	for (int i = 0; i < 5; i++) {
// 		printf("%c", a[i]);
// 	}

// 	return 0;
// }