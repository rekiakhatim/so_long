/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:15:56 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/01 22:09:02 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
//      int main () {
//     char x='-';
//     if(ft_isprint(x))
//     {
// printf(" is printbale \n ");
//     } else {
//  printf(" is not printbale \n ");
//     }
//     return (0);
// }
