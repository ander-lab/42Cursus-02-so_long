/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:26:01 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/16 18:09:17 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//static void	ft_collect(t_vars *mlx, char **map, int y, int x)
//{
//	return ;
//	mlx->coin.count--;
//	map[mlx->mario.y + y][mlx->mario.x + x] = '0';
//}
//
//static void	ft_exit(t_vars *mlx, char **map)
//{
//	map += 0;
//	//ft_endgame
//	close_mlx(mlx);
//	printf("Winner!\n");
//}
//static void	ft_cover_map(t_vars *mlx, int y, int x)
//{
//	mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->block, 
//		mlx->mario.x * 64, mlx->mario.y * 64);
//		mlx->mario.y += y;
//		mlx->mario.x += x;
//	mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->mario.ptr, 
//		mlx->mario.x * 64, mlx->mario.y * 64);
//}
//
//static void	ft_move(t_vars *mlx, char **map, int y, int x)
//{
//	char	point;
//
//	//printf("y %i\nx  %i\n", y, x);
//	//point = map[mlx->mario.y + y][mlx->mario.x + x];
//	//printf("%zu\n", mlx->mario.y);
//	printf("c  %c", map[mlx->mario.y + 1][mlx->mario.x + 1]);
//	return ;
//	if ((point != '1') || (point == 'E' && mlx->coin.count > 0))
//		return ;
//	if (point == 'C')
//	{
//		ft_collect(mlx, map, y, x);
//	}
//	else if (point == 'E' && mlx->coin.count == 0)
//		ft_exit(mlx, map);
//	ft_cover_map(mlx, y, x);
//}
//
int	close_mlx(t_vars *vars)
{
	printf("chauu\n");
	mlx_destroy_window(vars->ptr, vars->win);
	exit(0);
	return (0);
}

int	key_hook(int keycode, t_map *map, t_vars *mlx)
{
	map += 0;
	printf("key_hook y ==> %d\n", mlx->mario.y);
	printf("key_hook x ==> %d\n", mlx->mario.x);
	if (keycode == 53)
		close_mlx(mlx);
	else if (keycode == 0 || keycode == 123)
	{
		//ft_move(mlx, map->map, LEFT_Y, LEFT_X);
		printf("left\n");
	}
	else if (keycode == 1 || keycode == 125)
	{
		//ft_move(mlx, map->map, DOWN_Y, DOWN_X);
		printf("down\n");
	}
	else if (keycode == 2 || keycode == 124)
	{
		//ft_move(mlx, map->map, RIGHT_Y, RIGHT_X);
		printf("right\n");
	}
	else if (keycode == 13 || keycode == 126)
	{
		//ft_move(mlx, map->map, UP_Y, UP_X);
		printf("up\n");
	}
	return (0);
}
