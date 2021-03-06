/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:26:01 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/23 13:23:53 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

static void	ft_collect(t_vars *mlx, char **map, int y, int x)
{
	mlx->coin.count--;
	map[mlx->player.y + y][mlx->player.x + x] = '0';
}

static void	ft_cover_map(t_vars *mlx, int y, int x)
{
	mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->floor,
		mlx->player.x * 64, mlx->player.y * 64);
	mlx->player.y += y;
	mlx->player.x += x;
	mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->player.ptr,
		mlx->player.x * 64, mlx->player.y * 64);
}

static void	ft_move(t_vars *mlx, char **map, int y, int x)
{
	char	point;

	point = map[mlx->player.y + y][mlx->player.x + x];
	if ((point == '1') || (point == 'E' && mlx->coin.count > 0))
		return ;
	mlx->moves++;
	printf("Number of movements: %zu\n", mlx->moves);
	if (point == 'C')
		ft_collect(mlx, map, y, x);
	else if (point == 'E' && mlx->coin.count == 0)
		close_mlx(mlx, "Winner!");
	ft_cover_map(mlx, y, x);
}

int	close_mlx(t_vars *vars, char *msg)
{
	printf("%s\n", msg);
	mlx_destroy_window(vars->ptr, vars->win);
	ft_free_matrix(vars->map.map);
	free(vars);
	exit(0);
	return (0);
}

int	key_hook(int keycode, t_vars *mlx)
{
	if (keycode == 53)
		close_mlx(mlx, "Closed");
	else if (keycode == 0 || keycode == 123)
		ft_move(mlx, mlx->map.map, LEFT_Y, LEFT_X);
	else if (keycode == 1 || keycode == 125)
		ft_move(mlx, mlx->map.map, DOWN_Y, DOWN_X);
	else if (keycode == 2 || keycode == 124)
		ft_move(mlx, mlx->map.map, RIGHT_Y, RIGHT_X);
	else if (keycode == 13 || keycode == 126)
		ft_move(mlx, mlx->map.map, UP_Y, UP_X);
	return (0);
}
