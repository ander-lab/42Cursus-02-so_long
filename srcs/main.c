/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:45:26 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/30 12:05:55 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(int ac, char **av)
{
	t_vars	*mlx;

	mlx = NULL;
	if (ac != 2)
	{
		printf("Error\nThe program need one map");
		return (0);
	}
	mlx = ft_calloc(1, sizeof(t_vars));
	mlx->moves = 0;
	check_map(mlx, av);
	ft_game(mlx);
	return (0);
}
