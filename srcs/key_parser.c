/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:26:01 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/15 19:02:46 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	ft_right(t_vars *mlx, char **map)
{
	if (map[mlx->mario.y][mlx->mario.x + 1] != '1')
}

int	close_mlx(t_vars *vars)
{
	printf("chauu\n");
	mlx_destroy_window(vars->ptr, vars->win);
	exit(0);
	return (0);
}

int	key_hook(int keycode, t_vars *vars)
{
	if (keycode == 53)
		close_mlx(vars);
	else if (keycode == 0 || keycode == 123)
		printf("left\n");
	else if (keycode == 1 || keycode == 125)
		printf("down\n");
	else if (keycode == 2 || keycode == 124)
		printf("right\n");
	else if (keycode == 13 || keycode == 126)
		printf("up\n");
	return (0);
}
