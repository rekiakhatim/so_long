/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:46:16 by rkhatim           #+#    #+#             */
/*   Updated: 2024/05/30 11:36:14 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H 
#define SO_LONG_H

#include <mlx.h>
#include "./get_next_line/get_next_line.h"
 #include "./libft/libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_long 
{
    int map_x;
    int map_y;

    int map_h;
    int map_w;

    int px;
    int py;

    int fd;
    char *line;
    char **map;

    void *mlx;
    int **pin;

    int g_collect;
    int g_player;
    int g_exit;
    
    int total_collect;

    int exit_found;
    int collect_found;

    int player_x;
    int player_y;

}       t_long;


// window
void		initializing_map(t_long *data, int ac, char **av);
void		calculate_map_dimensions(t_long *data);
//void		setup_window(t_long *data);



// parsing - check_map
void    check_map_is_rectgle(t_long *data);
void    map_chek_borders(t_long *data);
int     check_map_items(t_long *data);
int     map_check_path(char *filename);
int     check_map_is_valid(t_long *data, char *filename);
void    flood_fill(t_long *data);



// read map
int     count_lines(int fd);
int     file_count_lines(t_long *data, char **argv);
void    read_map(t_long *data, char **argv);



//libft 
size_t  ft_strlen(const char *str);
int	    ft_strncmp(const char *s1, const char *s2, size_t n);

//usedfncts

void	player_cordinations(t_long *data);
int     map_check_collect(t_long *data);
int     fill_array(t_long *data);

//cleaning 
void    free_array(t_long *data);
//void    clean_mlx(t_long *data);
#endif



