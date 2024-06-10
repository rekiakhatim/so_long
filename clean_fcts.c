/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_fcts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 21:22:07 by rkhatim           #+#    #+#             */
/*   Updated: 2024/06/10 10:27:07 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// void	clean_mlx(t_long *data)
// {
// 	mlx_destroy_display(data->mlx);
// 	cleanup_data(data);
// 	free(data->mlx);
// }

void	free_array(t_long *data)
{
	int	i;

	i = 0;
	while (i < data->map_y)
	{
		free(data->pin[i]);
		i++;
	}
	free(data->pin);
}