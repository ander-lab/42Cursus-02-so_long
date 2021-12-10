/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:45:26 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/10 09:42:10 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(int ac, char **av)
{
	t_vars	*ps;

	if (ac != 2)
		return (0);
	ps = ft_calloc(1, sizeof(t_vars));
	check_map(ps, av);
//	ps->mlx = mlx_init();
//	ps->win = mlx_new_window(ps->mlx, 1920, 1080, "Hello world!");
//	mlx_hook(ps->win, 17, 1L<<1, close_mlx, ps);
//	mlx_key_hook(ps->win, key_hook, ps);
//	mlx_loop(ps->mlx);
}
