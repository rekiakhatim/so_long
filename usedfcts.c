/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usedfcts.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 09:26:21 by rkhatim           #+#    #+#             */
/*   Updated: 2024/06/10 10:39:43 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	if (*little == '\0')
// 		return ((char *)big);
// 	while (big[i] && i < len)
// 	{
// 		j = 0;
// 		while (big[i + j] == little[j] && little[j] && (i + j) < len)
// 			j++;
// 		if (little[j] == '\0')
// 			return ((char *)&big[i]);
// 		i++;
// 	}
// 	return (NULL);
// }

void	player_cordinations(t_long *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->map_y)
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'P')
			{
				data->player_y = i;
				data->player_x = j;
			}
			j++;
		}
		i++;
	}
}

// void	print_array(t_long *data)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (i < data->map_y)
// 	{
// 		j = 0;
// 		while (j < data->map_x)
// 		{
// 			ft_printf("%d", data->pin[i][j]);
// 			j++;
// 		}
// 		ft_printf("\n");
// 		i++;
// 	}
// }

// void	player_coin(t_long *data, int x, int y)
// {
// 	if (data->map[y][x] == 'C')
// 	{
// 		data->map[y][x] = '0';
// 		data->count_coins_p += 1;
// 	}
// }

// void	clean_mlx(t_long *data)
// {
// 	mlx_destroy_display(data->mlx);
// 	cleanup_data(data);
// 	free(data->mlx);
// }