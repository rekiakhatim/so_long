/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:30:54 by rkhatim           #+#    #+#             */
/*   Updated: 2023/11/20 16:39:23 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	if (fd != -1)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}
// int	main(void)
// {
// 	char	*s;
// 	int		fd;

// 	s = "rekia";
// 	fd = open("file1.txt", O_RDWR | O_CREAT);
// 	ft_putstr_fd(s, fd);
//     printf("%d",fd);
// 	//close(fd);
// }
