/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:17:19 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/01 22:10:18 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lend;
	size_t	lens;

	i = 0;
	lens = ft_strlen(src);
	if (!dest && !dstsize)
		return (lens);
	lend = ft_strlen(dest);
	j = lend;
	if (dstsize <= lend)
		return (lens + dstsize);
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - lend - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
	}
	dest[j] = '\0';
	return (lens + lend);
}
// #include <string.h>
// int	main(void)
// {
// 	char dest[8] = "sala";
// 	char src[] = "rekia";
// 	size_t size;

// 	size = 8;
// 	//printf("orig: %zu\n", strlcat(dest, src, 8));
// 	printf("lent : %zu\n", ft_strlcat(dest, src, 8));
// }