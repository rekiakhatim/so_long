/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:16:41 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/01 22:12:20 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)b;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (p);
}
// int	main(void)
// {
// 	 int arr ={0};
// 	 ft_memset(&arr, 255, 4);
// 	 ft_memset((char *)(&arr) + 3, 127, 1);
// 	 ft_memset((void *)&arr,0,2);
// 	 ft_memset((void *)&arr,1,1);
// 	 ft_memset(&arr,5,2);
// 	 ft_memset(&arr,57,1);
// 	 printf("%d  \n", arr);
// 	return (0);
// }