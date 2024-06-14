/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:59:24 by rkhatim           #+#    #+#             */
/*   Updated: 2024/06/14 01:39:51 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void import_img(t_long *data)
{
      init_variables(data);
      data->ember = mlx_xpm_file_to_image(data->mlx,"img/ember.xpm",
                   &data->map_w, &data->map_h);
      if(data->ember == NULL)
      {
        write(1,"Error\nloading PL'img failed ",27);
        free_imgs(data);
      }
      data->wall = mlx_xpm_file_to_image(data->mlx,"img/wall.xpm",
             &data->map_w, &data->map_h);
     if(data->wall == NULL)
     {
        write(1,"Error\nloading WL'img failed ",29);
        free_imgs(data);
     }           
} 
void    import_img0(t_long *data)
{
    init_variables(data);
      data->doorf = mlx_xpm_file_to_image(data->mlx,"img/doorf.xpm",
                   &data->map_w, &data->map_h);
      if(data->doorf == NULL)
      {
        write(1,"Error\nloading DF'img failed ",29);
        free_imgs(data);
      }
      data->doorw = mlx_xpm_file_to_image(data->mlx,"img/doorw.xpm",
             &data->map_w, &data->map_h);
     if(data->doorw == NULL)
     {
        write(1,"Error\nloading DF'img failed ",29);
        free_imgs(data);
     }       
}
void    import_img1(t_long *data)
{
    init_variables(data);
      data->wood = mlx_xpm_file_to_image(data->mlx,"img/wood.xpm",
                   &data->map_w, &data->map_h);
      if(data->wood == NULL)
      {
        write(1,"Error\nloading WD'img failed ",29);
        free_imgs(data);
      }
      data->floor = mlx_xpm_file_to_image(data->mlx,"img/floor.xpm",
             &data->map_w, &data->map_h);
     if(data->floor == NULL)
     {
        write(1,"Error\nloading FL'img failed ",29);
        free_imgs(data);
     }       
}

