/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floodfill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:37:19 by rkhatim           #+#    #+#             */
/*   Updated: 2024/06/10 10:31:01 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int fill_array(t_long *data)
{
  int x;
  int y; 
  
  x = 0;
  y = 0;
  
  data->pin = malloc(data->map_y * sizeof(int *));
  while (y < data->map_y)
  {
    x = 0;
    data->pin[y] = malloc(data->map_x * sizeof(int *));
    while(x < data->map_x)
    {
        data->pin[y][x] = 0;
        x++;
    }
    y++;
  }
  return (0);
}
void floodfill_checking_c(t_long *data , int px ,int py )
{
    if (data->pin[px][py] == 0
		&& (data->map[px][py] == 'C'
			|| data->map[px][py] == 'P'
			|| data->map[px][py] == '0'))
	{
		data->pin[px][py] = 1;
		if (data->map[px][py] == 'C')
			data->collect_found += 1;
		floodfill_checking_c(data, px - 1, py);
		floodfill_checking_c(data, px + 1, py);
		floodfill_checking_c(data, px, py - 1);
		floodfill_checking_c(data, px, py + 1);
	}
}
void floodfill_checking_e(t_long *data, int px ,int py)
{
    	if (data->pin[px][py] == 0
		&& (data->map[px][py] != '1'))
	{
		data->pin[px][py] = 1;
		if (data->map[px][py] == 'E')
			data->exit_found += 1;
		floodfill_checking_e(data, px - 1, py);
		floodfill_checking_e(data, px + 1, py);
		floodfill_checking_e(data, px, py - 1);
		floodfill_checking_e(data, px, py + 1);
	}
}

void    flood_fill(t_long *data)
{
    data->exit_found = 0;
	data->collect_found = 0;
	player_cordinations(data);
	map_check_collect(data);
	fill_array(data);
	floodfill_checking_c(data, data->player_y, data->player_x);
	free_array(data);
	fill_array(data);
	floodfill_checking_e(data, data->player_y, data->player_x);
	free_array(data);
	if (data->collect_found != map_check_collect(data)
		|| data->exit_found != 1)
	{
		write(1,"Error\nunplayable map",33);
		exit(1);
	}

}
