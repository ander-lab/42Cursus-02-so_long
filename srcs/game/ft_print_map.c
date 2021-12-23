/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:29:16 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/23 13:17:06 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

static void	ft_print_coin(t_vars *mlx, int x, int y)
{
	mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->coin.ptr, 64 * x, 64 * y);
	mlx->coin.count++;
}

static void	ft_print_mario(t_vars *mlx, int x, int y)
{
	mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->player.ptr,
		64 * x, 64 * y);
	mlx->player.x = x;
	mlx->player.y = y;
}

static	void	ft_print_map(char **map, t_vars *mlx, int x, int y)
{
	if (map[y][x] == '1')
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->block, 64 * x, 64 * y);
	else
	{
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->floor, 64 * x, 64 * y);
		if (map[y][x] == 'C')
			ft_print_coin(mlx, x, y);
		if (map[y][x] == 'P')
			ft_print_mario(mlx, x, y);
		if (map[y][x] == 'E')
			mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->exit,
				64 * x, 64 * y);
	}
}

void	ft_iter_map(t_vars *mlx)
{
	int	x;
	int	y;

	y = 0;
	while (y < mlx->map.data.line_count)
	{
		x = 0;
		while (x < mlx->map.data.max)
		{
			ft_print_map(mlx->map.map, mlx, x, y);
			x++;
		}
		y++;
	}
}
