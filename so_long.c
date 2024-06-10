/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:53:04 by rkhatim           #+#    #+#             */
/*   Updated: 2024/06/10 11:46:04 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//#include "./minilibx-linux/mlx.h"

int main(int argc, char **argv)
{
    // argc = 0;
    // argv =NULL;
    t_long  data;
    //---------------------
    //check-->name file
    //file is exist
    //read map 
    // check broder 
    //empty line
    // check charach
//   ---------------------------
    initializing_map(&data, argc, argv);
	calculate_map_dimensions(&data);     
    read_map(&data,argv);
    check_map_is_valid(&data, argv[1]);
    flood_fill(&data);
    //read_map(&data,argv);
    // int i = 0;
    // while(data.map[i])
    // {
    //     printf("-->%s",data.map[i]);
    //     i++;
    // }
    void *ptr;
    void *win;
    ptr =mlx_init();
    win =mlx_new_window(ptr,600,700,"so_long");
    mlx_loop(ptr);   
    return(0);
}  
