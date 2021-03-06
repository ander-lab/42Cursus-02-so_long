/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_errors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:11:34 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/30 11:58:34 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	map_errors(int c, t_vars *ps)
{
	if (c == INVALID_CHAR)
		printf("Error\nInvalid char in the map\n");
	else if (c == INVALID_REC)
		printf("Error\nThe map isn't a rectangle\n");
	else if (c == INVALID_ACCESS)
		printf("Error\nCan't read the map\n");
	else if (c == INVALID_MAP_CLOSE)
		printf("Error\nMap isn't close\n");
	else if (c == INVALID_POSITION)
		printf("Error\nOnly one 'P' allowed");
	else if (c == MIN_CHARS)
		printf("Error\nThe map require almost one 'C', 'E' or '0'");
	else if (c == INVALID_EXTENSION)
		printf("Error\nThe extension should be .ber");
	else if (c == INVALID_ARGV)
		printf("Error\nThe program need one map");
	if (ps->map.map && ps->map.data.lenght_str)
	{
		ft_free_matrix(ps->map.map);
		free (ps->map.data.lenght_str);
	}
	exit(EXIT_FAILURE);
}
