/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:45:26 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/13 13:35:13 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void lk(void)
{
	system("leaks -q so_long");
}

int	main(int ac, char **av)
{
	t_map	*map;

	atexit(lk);
	if (ac != 2)
		map_errors(INVALID_ARGV, map);
	map = ft_calloc(1, sizeof(t_vars));
	check_map(map, av);
//	ps->mlx = mlx_init();
//	ps->win = mlx_new_window(ps->mlx, 1920, 1080, "Hello world!");
//	mlx_hook(ps->win, 17, 1L<<1, close_mlx, ps);
//	mlx_key_hook(ps->win, key_hook, ps);
//	mlx_loop(ps->mlx);
	return (0);
}
