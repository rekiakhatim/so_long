/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zahira.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 01:40:57 by rkhatim           #+#    #+#             */
/*   Updated: 2024/06/14 04:03:15 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void mlx_img(t_long *data)
{
    int hight;
    int width;

    data->wall= mlx_xpm_file_to_image(data->mlx,"img/wall1.xpm",&width,&hight);
    data->wood= mlx_xpm_file_to_image(data->mlx,"img/wood.xpm",&width,&hight);
    data->floor= mlx_xpm_file_to_image(data->mlx,"img/floor.xpm",&width,&hight);
    data->doorw= mlx_xpm_file_to_image(data->mlx,"img/doorw1.xpm",&width,&hight);
    data->ember= mlx_xpm_file_to_image(data->mlx,"img/ember.xpm",&width,&hight);
    if(data->wall == NULL || data->wood == NULL || data->floor == NULL
      || data->doorw == NULL || data->ember == NULL )
    {
         write(1,"Error\nloading img failed ",26);
        free_imgs(data);
        exit(1);
    }
}