/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:18:07 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/01 22:10:57 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	rlen;
	char	*sub;

	i = 0;
	rlen = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (s[start + rlen] && rlen < len)
		rlen++;
	sub = (char *)malloc(sizeof(char) * (rlen + 1));
	if (!sub)
		return (NULL);
	while (s[start + i] && i < rlen)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
// #include <string.h>
// int main()
// {
// 	char* str;

// 	str = ft_substr("Hello",3,1200);
// 	printf("%s\n", str);

// 	return (0);
// }