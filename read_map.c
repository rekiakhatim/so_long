/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:45:02 by rkhatim           #+#    #+#             */
/*   Updated: 2024/05/30 12:54:47 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_lines(int fd)
{
	int		i;
	char	*line;

	i = 0;
	line = get_next_line(fd);
	while (line != NULL)
	{
		i++;
		free(line);
		line = get_next_line(fd);
	}
	return (i);
}

int	file_count_lines(t_long *data, char **argv)
{
	int	lines_num;

	data->fd = open(argv[1], O_RDONLY);
	if (data->fd == -1)
	{
		write(1,"Error\nFailed to read the file.",31);
		exit(0);
	}
	lines_num = count_lines(data->fd);
	close(data->fd);
	return (lines_num);
}

void	read_map(t_long *data, char **argv)
{
	int	i;
	int	lines_num;

	i = 0;
	lines_num = file_count_lines(data, argv);
	data->fd = open(argv[1], O_RDONLY);
	if (data->fd == -1)
	{
		write(1,"Error\nFailed to read the file.",31);
		exit(0);
	}
	data->map = malloc((lines_num + 1) * sizeof(char *));
	if (data->map == NULL)
		return ;
	data->line = get_next_line(data->fd);
	while (data->line != NULL)
	{
		data->map[i] = data->line;
		data->line = get_next_line(data->fd);
		i++;
	}
	close(data->fd);
}