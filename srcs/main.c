/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:45:26 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/13 15:58:34 by ajimenez         ###   ########.fr       */
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
	return (0);
}
