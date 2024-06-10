/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:47:14 by rkhatim           #+#    #+#             */
/*   Updated: 2023/11/20 16:07:23 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	if (fd != -1)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
// int	main(void)
// {
// 	int fd;
// 	char *s;
// 	s = "IM REKIA";
// 	fd = open("file2.txt", O_RDWR | O_CREAT);
// 	ft_putendl_fd(s, fd);
// 	close(fd);
// }