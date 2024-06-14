/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:53:04 by rkhatim           #+#    #+#             */
/*   Updated: 2024/06/14 00:05:36 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//#include "./minilibx-linux/mlx.h"

int main(int argc, char **argv)
{

    t_long  data;
    
    initializing_map(&data, argc, argv);
	calculate_map_dimensions(&data);     
    read_map(&data,argv);
    check_map_is_valid(&data, argv[1]);
    flood_fill(&data);
    set_window(&data);
    mlx_loop(data.mlx);
    // int i = 0;
    // while(data.map[i])
    // {
    //     printf("-->%s",data.map[i]);
    //     i++;
    // }
    // void *ptr;
    // void *win;
    // ptr =mlx_init();
    // win =mlx_new_window(ptr,600,700,"so_long");
    // mlx_loop(ptr);   
     return(0);
}  

