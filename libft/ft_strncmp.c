/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:17:44 by rkhatim           #+#    #+#             */
/*   Updated: 2023/11/13 15:11:12 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
		return ((unsigned char)(*s1) - (unsigned char)(*s2));
	return (0);
}

//  int main (){
//     char s1[] = "test";
//     char s2[] = "tEst";
//     size_t n = 4;
//     printf("this is our return (: %d \n",ft_strncmp(s1,s2,n));
//     printf("this is org return (: %d",strncmp(s1,s2,n));
//  }