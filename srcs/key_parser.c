/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:26:01 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/20 12:08:33 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void lk(void)
{
	system("leaks -q so_long");
}

static void	ft_collect(t_vars *mlx, char **map, int y, int x)
{
	mlx->coin.count--;
	map[mlx->mario.y + y][mlx->mario.x + x] = '0';
}

static void	ft_cover_map(t_vars *mlx, int y, int x)
{
	mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->floor,
		mlx->mario.x * 64, mlx->mario.y * 64);
	mlx->mario.y += y;
	mlx->mario.x += x;
	mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->mario.ptr,
		mlx->mario.x * 64, mlx->mario.y * 64);
}

static void	ft_move(t_vars *mlx, char **map, int y, int x)
{
	char	point;

	point = map[mlx->mario.y + y][mlx->mario.x + x];
	if ((point == '1') || (point == 'E' && mlx->coin.count > 0))
		return ;
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
