/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:16:05 by rkhatim           #+#    #+#             */
/*   Updated: 2023/11/29 19:30:48 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	char str[] = {'a', 'b', 'c', 'd'};
// 	char sc = 'a';
// 	char *p;
// 	p = (char *)ft_memchr(str, sc,3);
// 	printf("le caractere a rechercher est :   %s", p);
// }