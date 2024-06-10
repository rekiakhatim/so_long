/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:14:36 by rkhatim           #+#    #+#             */
/*   Updated: 2024/05/30 10:10:46 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	dst = (char *)malloc(count * size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, count * size);
	return ((void *)dst);
}

// int	main(void)
// {
// 	size_t	c;
// 	size_t	size;
// 	char	*p;

// 	c = 0;
// 	size = 0;
// 	p = (char *)ft_calloc(c, size);
// 	p = (char *)calloc(c, size);
// 	printf("%s", p);
// }
