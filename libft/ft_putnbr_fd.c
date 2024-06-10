/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:03:20 by rkhatim           #+#    #+#             */
/*   Updated: 2023/11/21 11:16:56 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	if (fd != -1)
	{
		nbr = n;
		if (nbr < 0)
		{
			nbr = nbr * (-1);
			ft_putchar_fd('-', fd);
		}
		if (nbr > 9)
		{
			ft_putnbr_fd(nbr / 10, fd);
			ft_putnbr_fd(nbr % 10, fd);
		}
		else
			ft_putchar_fd(nbr + 48, fd);
	}
}
// int main()
// {
//     int fd;
//     int n;
//     n = -2147483648 ;
//     fd = open("file3.txt", O_RDWR | O_CREAT);
//     ft_putnbr_fd(n,fd);
//     close(fd);

// }
