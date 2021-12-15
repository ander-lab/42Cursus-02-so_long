/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:29:16 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/15 12:14:33 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

static void	ft_print_coin(t_vars *mlx, size_t x, size_t y)
{
	mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->coin.ptr, 64 * x, 64 * y);
	mlx->coin.count++;
}

static void	ft_print_mario(t_vars *mlx, size_t x, size_t y)
{
	mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->mario.ptr, 64 * x, 64 * y);
	mlx->mario.x = x;
	mlx->mario.y = y;
}

static	void	ft_print_map(char **map, t_vars *mlx, size_t x, size_t y)
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
			mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->pipe,
				64 * x, 64 * y);
	}
}

void	ft_iter_map(char **map, t_vars *mlx)
{
	size_t	x;
	size_t	y;

	y = 0;
	x = 0;
	while (map[y])
	{
		while(map[y][x])
		{
			ft_print_map(map, mlx, x, y);
			x++;
		}
		y++;
	}
}
