/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:17:53 by rkhatim           #+#    #+#             */
/*   Updated: 2023/11/12 11:47:38 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (*to_find == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (to_find[j] && str[i + j] && str[i + j] == to_find[j] && (i
				+ j) < len)
			j++;
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
// int main()
// {
//     char str[] = "ABCDEF";
//     char tf[] =  "B";
//     size_t n = 2;
//     printf("mine : %s\n ", ft_strnstr(str,tf,n));
//     printf("their: %s\n ",strnstr(str,tf,n));
//  return (0);
// }