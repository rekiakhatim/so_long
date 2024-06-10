/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:20:32 by rkhatim           #+#    #+#             */
/*   Updated: 2023/11/29 18:31:11 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		j;
	long	nbr;

	nbr = n;
	n = 0;
	j = ft_count(nbr);
	p = (char *)malloc(j + 1);
	if (!p)
		return (NULL);
	p[j--] = '\0';
	if (nbr < 0)
	{
		nbr = -nbr;
		p[0] = '-';
		n = 1;
	}
	while (j >= n)
	{
		p[j--] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	return (p);
}
// int	main(void)
// {
// 		printf("%s \n", ft_itoa(0));
// 			printf("%s", ft_itoa(-2147483648));
// }