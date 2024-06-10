/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:42:02 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/01 22:09:41 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd != -1)
		write(fd, &c, 1);
}
// int	main(void)
// {
// 	int fd = open("test1.txt", O_RDWR | O_CREAT);
// 	int fd1 = open("test2.txt" , O_RDWR | O_CREAT);
//     printf(" %d %d\n",fd1,fd);
// 	//close(fd);
// }