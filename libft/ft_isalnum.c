/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:15:00 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/01 22:08:44 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
	{
		return (1);
	}
	return (0);
}
// int	main(void)
// {
// 	char	x;

// 	x = '2';
// 	if (ft_isalnum(x))
// 	{
// 		printf("this var is an alphanum \n ");
// 	}
// 	else
// 	{
// 		printf(" it is not an alphanum \n ");
// 	}
// 	return (0);
// }
