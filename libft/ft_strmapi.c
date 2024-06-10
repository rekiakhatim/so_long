/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:07:23 by rkhatim           #+#    #+#             */
/*   Updated: 2023/11/27 15:47:31 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	res = (char *)malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
// char	my_fun(unsigned int i, char c)
// {
// 	return (c - 32);
// }

// int	main(void)
// {
// 	char	input[20] = "hellokeltoum ";
// 	char	*result;

// 	result = ft_strmapi(input, my_fun);
// 	printf("Original: %s\n", input);
// 	printf("Modified: %s", result);
// 	//free(result);
// 	return (0);
// }
