/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zahira.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 01:40:57 by rkhatim           #+#    #+#             */
/*   Updated: 2024/06/14 02:22:21 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void mlx_img(t_long *data)
{
    int hight;
    int width;

    data->wall= mlx_xpm_file_to_image(data->mlx,"img/wall.xpm",&width,&hight);
    data->wood= mlx_xpm_file_to_image(data->mlx,"img/wood.xpm",&width,&hight);
    data->floor= mlx_xpm_file_to_image(data->mlx,"img/floor.xpm",&width,&hight);
    data->doorw= mlx_xpm_file_to_image(data->mlx,"img/doorw.xpm",&width,&hight);
    data->ember= mlx_xpm_file_to_image(data->mlx,"img/ember.xpm",&width,&hight);
}