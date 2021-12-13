/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:17:45 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/13 15:58:31 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_game(t_map *map, t_vars *mlx)
{
	int	height;
	int	width;

	height = map->data.line_count * 64;
	width = map->data.max * 64;
	mlx->ptr = mlx_init();
	mlx->win = mlx_new_window(mlx->ptr, width, height, "eskereeee");
	//TODO --CREATE IMAGES mlx_xpm_file_to_image
	//TODO --PRINT MAP
	mlx_hook(mlx->win, 17, 1L<<1, close_mlx, mlx);
	mlx_key_hook(mlx->win, key_hook, mlx);
	mlx_loop(mlx->ptr);
}
