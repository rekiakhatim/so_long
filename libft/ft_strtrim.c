/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:26:37 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/01 22:10:50 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	str = NULL;
	if (s1 != NULL && set != NULL)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (end > start && ft_strchr(set, s1[end - 1]))
			end--;
		str = (char *)malloc(sizeof(char) * (end - start + 1));
		if (str)
		{
			ft_strlcpy(str, &s1[start], end - start + 1);
			str[end - start] = '\0';
		}
	}
	return (str);
}
// #include <string.h>
// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("", ""));
// 	printf("%s\n", ft_strtrim("xrekiayyz", "xyz"));
// 	return (0);
// }