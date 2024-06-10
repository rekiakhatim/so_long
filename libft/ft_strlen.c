/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:17:38 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/01 22:10:32 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}
//      int main(){
//    const char *str = "h";
//    size_t l = ft_strlen(str);
//    printf(" length of my string is %zu  \n",l);
//  return (0);
//      }
