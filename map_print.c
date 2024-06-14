/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:17:58 by rkhatim           #+#    #+#             */
/*   Updated: 2024/06/14 03:57:31 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_imgs(t_long *data)
{
	if (data->ember != NULL)
		mlx_destroy_image(data->mlx, data->ember);
	if (data->wall != NULL)
		mlx_destroy_image(data->mlx, data->wall);
	if (data->doorw != NULL)
		mlx_destroy_image(data->mlx, data->doorw);
    if (data->doorf != NULL)
		mlx_destroy_image(data->mlx, data->doorf);
	if (data->floor != NULL)
		mlx_destroy_image(data->mlx, data->floor);
	if (data->wood != NULL)
		mlx_destroy_image(data->mlx, data->wood);
	//clean_img(data);
	exit(1);
}

void	init_variables(t_long *data)
{
	data->ember = NULL;
	data->wall = NULL;
	data->doorw = NULL;
    data->doorf = NULL;
	data->floor = NULL;
	data->wood = NULL;
	
}

void	print_images(t_long *data)
{
	int	i;
	int	j;

	
	//import_imgs(data);
	mlx_img(data);
	
	i = 0;
	while (i < data->map_y)
	{
		j = 0;
		while (data->map[i][j] != '\n' && data->map[i][j] != '\0'  )
		{
			
			print_images_game(data, i, j);
			j++;
		}
		i++;
	}
	//printf("imane\n");
}

void	print_images_game(t_long *data, int i, int j)
{
	if (data->map[i][j] == '1')
		mlx_put_image_to_window(data->mlx, data->window, data->wall, j
			* 58, i * 58);
	 if (data->map[i][j] == '0')
		mlx_put_image_to_window(data->mlx, data->window, data->floor, j
			* 58, i * 58);
	if (data->map[i][j] == 'P')
		mlx_put_image_to_window(data->mlx, data->window, data->ember,
			j * 58, i * 58);
	if (data->map[i][j] == 'E')
		mlx_put_image_to_window(data->mlx, data->window, data->doorw, j
			* 58, i * 58);
	if (data->map[i][j] == 'C')
		mlx_put_image_to_window(data->mlx, data->window, data->wood, j
			* 58, i * 58);
	printf("hi");
}