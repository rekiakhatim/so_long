/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:15:17 by rkhatim           #+#    #+#             */
/*   Updated: 2023/11/28 16:56:32 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
//     int main() {
//     char x='a';
//     if(ft_isalpha(x))
//     {
// printf(" %c is alpha \n ",x);
//     } else {
//  printf(" %c is not alpha \n ",x);
//     }
//     return (0);
//        }