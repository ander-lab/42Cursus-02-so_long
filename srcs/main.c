/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:45:26 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/15 18:16:57 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(int ac, char **av)
{
	t_vars	*mlx;
	t_map	*map;

	map = NULL;
	mlx = NULL;
	if (ac != 2)
		map_errors(INVALID_ARGV, map);
	mlx = ft_calloc(1, sizeof(t_vars));
	map = ft_calloc(1, sizeof(t_map));
	check_map(map, av);
	ft_game(map, mlx);
	return (0);
}
