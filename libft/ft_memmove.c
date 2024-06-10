/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:16:34 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/01 22:09:22 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else if (d < s)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
// int	main(void)
// {
// 	char	str1[] = "Hello, World!";
// 	char	str2[7];

// 	// Testing ft_memmove
// 	ft_memmove(str2, str1, 13);
// 	// memmove(str2, str1, 13);
// 		printf("after ft_memmove: %s\n", str2);
// 	// printf("after memmove: %s ", str2);
// 	return (0);
// }
