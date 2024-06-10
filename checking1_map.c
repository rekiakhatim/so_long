/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking1_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:03:19 by rkhatim           #+#    #+#             */
/*   Updated: 2024/05/30 15:15:52 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    check_map_is_rectgle(t_long *data)
{
    if(data->map_y == data->map_x)
    {
        write(1,"Error\n It must take rectangle format",37);
       // clean_mlx(data);
        exit(1);
    }
}
void	map_chek_borders(t_long *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->map_y)
	{
		j = 0;
	//printf("hello i==%d y==%d\n",i,data->map_y);
		while (data->map[i][j] != '\n' && data->map[i][j] != '\0')
		{
				//printf("hello i==%d y==%d\n",i,data->map_y);
			if (data->map[0][j] != '1' || data->map[data->map_y
				- 1][j] != '1')
			{
					//printf("hello i==%d y==%d\n",i,data->map_y);
				(write(1,"Error\nIn map border width !!",29),
					exit(1));
			}
			if (data->map[i][0] != '1' || data->map[i][data->map_x
				- 1] != '1')
			{
				write(1,"Error\nIn map border height !!",30);
					//clean_mlx(data), exit(1));
					exit(1);
			}
			j++;
		}
		i++;
	}
}


// void map_check_borders(t_long *data)
// {
//     // Check if map dimensions are valid
//     if (data->map_x < 2 || data->map_y < 2) {
//         write(1, "Error: Map dimensions are too small!\n", 37);
//         exit(1);
//     }

//     // Check top and bottom borders
//     int j = 0;
//     while (j < data->map_x) {
//         if (data->map[0][j] != '1' || data->map[data->map_y - 1][j] != '1') {
//             write(1, "Error: Map border width is incorrect!\n", 40);
//             exit(1);
//         }
//         j++;
//     }

//     // Check left and right borders
//     int i = 0;
//     while (i < data->map_y) {
//         if (data->map[i][0] != '1' || data->map[i][data->map_x - 1] != '1') {
//             write(1, "Error: Map border height is incorrect!\n", 41);
//             exit(1);
//         }
//         i++;
//     }

//     // If all borders are correct, no error
//     write(1, "Map borders are correct.\n", 25);
// }

void	itemsmap_nbr(t_long *data)
{
	int	i;
	int	j;

	i = 0;
	data->g_player = 0;
    data->g_collect = 0;
    data->g_exit = 0;
	while (i < data->map_y)
	{
		j = 0;
		while (data->map[i][j] != '\n' && data->map[i][j] != '\0')
		{
			if (data->map[i][j] == 'P')
				data->g_player++;
			else if (data->map[i][j] == 'C')
				data->g_collect++;
			else if (data->map[i][j] == 'E')
				data->g_exit++;
			j++;
		}
		i++;
	}
}
void	itemsmap_nbr_validation(t_long *data)
{
	if (data->g_collect < 1 || data->g_player != 1 
         || data->g_exit != 1)
	{
		write(1,"Error\n1 player, 1 exit, collectibles > 0!!\n",44);
		//clean_mlx(data);
		exit(1);
	}
}
int check_map_items(t_long *data)
{
	int i; //row index
	int j; //column index 
	char c;

	i = 0;
	while(i < data-> map_y)
	{
		j = 0;
		while(data->map[i][j] != '\n' && data->map[i][j] != '\0')
		{
			c = data->map[i][j];
			if(c != 'P' &&  c != 'C' && c != 'E' 
			&& c != '1' && c != '0')
				return(write(1,"Error\n incorrect item :",24), write(1,&c,1), exit(1), 1);
			j++;
		}
		i++;
	}
	itemsmap_nbr(data);
	itemsmap_nbr_validation(data);
	return(0);
}

