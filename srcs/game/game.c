/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:17:45 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/20 11:44:14 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#include <stddef.h>


void	ft_game(t_vars *mlx)
{
	int	height;
	int	width;

	height = mlx->map.data.line_count * 64;
	width = mlx->map.data.max * 64;
	mlx->ptr = mlx_init();
	mlx->win = mlx_new_window(mlx->ptr, width, height, "eskereeee");
	ft_xmp_to_struct(mlx);
	ft_iter_map(mlx);
	mlx_hook(mlx->win, 17, 1L << 1, close_mlx, mlx);
	mlx_key_hook(mlx->win, key_hook, mlx);
	mlx_loop(mlx->ptr);
}
