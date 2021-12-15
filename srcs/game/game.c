/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:17:45 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/15 18:17:19 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#include <stddef.h>


void	ft_game(t_map *map, t_vars *mlx)
{
	int	height;
	int	width;

	height = map->data.line_count * 64;
	width = map->data.max * 64;
	mlx->ptr = mlx_init();
	mlx->win = mlx_new_window(mlx->ptr, width, height, "eskereeee");
	//mlx->block = mlx_xpm_file_to_image(mlx->ptr, "../../sprites/water.xpm", &x, &y);
	//printf("%p\n", mlx_xpm_file_to_image(mlx->ptr, "../../sprites/water.xpm", &x, &y));
	//mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->block, x, y);
	ft_xmp_to_struct(mlx);
	ft_iter_map(map, mlx);
	mlx_hook(mlx->win, 17, 1L << 1, close_mlx, mlx);
	mlx_key_hook(mlx->win, key_hook, mlx);
	mlx_loop(mlx->ptr);
}
