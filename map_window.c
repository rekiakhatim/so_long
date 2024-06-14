/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_window.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:35:40 by rkhatim           #+#    #+#             */
/*   Updated: 2024/06/14 02:03:57 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    initializing_map(t_long *data,int argc,char **argv)
{
    if(argc != 2)
    {
        write(1,"Error\nIn nbr of args !!",24);
        exit(1);
    }
    data->mlx = mlx_init();
    data ->fd = open(argv[1],O_RDONLY);
    if(data->fd == -1)
    {
        write(1,"Error\n File not Found !!",25);
        mlx_destroy_display(data->mlx);
        free(data->mlx);
        exit(1);
    }
    data->map_h = count_lines(data->fd);
	close(data->fd);
	data->fd = open(argv[1], O_RDONLY);
	data->line = get_next_line(data->fd);
    if(data->line == NULL)
         exit(1);
	data->map_w = ft_strlen(data->line) - 1;
	free(data->line);

    
	close(data->fd);
}
void	calculate_map_dimensions(t_long *data)
{
    data->map_y = data->map_h;
	data->map_x = data->map_w;
	data->map_h *= 58;
	data->map_w *= 58;
}
void    set_window(t_long *data)
{
    data->window = mlx_new_window(data->mlx,data->map_w,
          data-> map_h , "welcome to yuki's game ");
   print_images(data);
// int i;
// int j;
//  i = 0;
//  j = 0;
//     mlx_img(data);
//     printf("--->%d\n",data->map_y);
//     while(i < 4)
//     {
//        printf("-->%s",data->map[i]);
//        i++;
//     }
    // while(data->map[i])
    // {
    //     j = 0;
    //     while(data->map[i][j])
    //     {
            
    //         if(data->map[i][j] == '1')
    //         {
    //             // printf("--> %d\n",data->map_h);
    //             // exit(1);
    //             mlx_put_image_to_window(data->mlx,data->window,data->wall,i*58,j*58);
    //         }
    //         j++;
            
    //     }
    //     i++;
    // }
   
    
}


