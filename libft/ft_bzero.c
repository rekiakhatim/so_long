/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:14:49 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/01 18:26:20 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
// int	main(void)
// {
// 	char	array[] = "Hello, World!";
// 	size_t	n;

// 	printf("Original array: %s\n", array);
// 	n = 0;
// 	ft_bzero(array, n);
// 	printf("Modified array: %p\n",&array);
// 	return (0);
// }
