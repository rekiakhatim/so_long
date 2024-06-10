/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking2_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:33:00 by rkhatim           #+#    #+#             */
/*   Updated: 2024/05/30 10:19:03 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_check_collect(t_long *data)
{
	int	i;
	int	j;

	i = 0;
	data->total_collect = 0;
	while (i < data->map_y)
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'C')
				data->total_collect++;
			j++;
		}
		i++;
	}
	return (data->total_collect);
}

void	map_check_structure(t_long *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->map_y)
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][0] != '1')
			{
				write(1,"Error\n Invalid map structure. Empty line missing between lines !!\n",67);
				//clean_mlx(data);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

int map_check_path(char *filename)
 {
    size_t len;
    char *extension;

    if (!filename)
        return (0);
    len = ft_strlen(filename);
    if (len <= 4)
        return (0);
    extension = filename + len - 4;
    if (ft_strncmp(extension, ".ber",4) == 0)
        return (1);
    else
        return (0);
}

int check_map_is_valid(t_long *data, char *filename)
{
    if(!map_check_path(filename))
    {
        write(1,"Error\nMap path is not valide !!",32);
        exit(1);
    }
    if(data->map_y == 0)
    {
        write(1,"Error\nEmpty map !!",19);
       // clean_mlx(data);
        exit(1);
    }
    check_map_is_rectgle(data);
    map_chek_borders(data); 
    check_map_items(data);
    map_check_structure(data);
	return(0);
}
