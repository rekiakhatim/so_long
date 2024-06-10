/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:18:00 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/03 14:54:08 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char const	*x;

	x = NULL;
	while (*s)
	{
		if (*s == (char)c)
			x = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)x);
}
int main()
{
    const char *str = "Hello, World!";
    char c = 'l';

// Use strrchr to find the last occurrence of 'o' in the string
    char *last_o = ft_strrchr(str, c);
    if (last_o != NULL) {
printf("Last '%c' found at position %ld\n",c, last_o - str);
    } else {
 printf("'%c' not found in the string\n",c);
    }
    return (0);
}
