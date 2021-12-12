/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:29:11 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/12 18:54:40 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#include <stdio.h>

static int	ft_isinvalid(int c)
{
	if (c != '0' && c != '1' && c != 'E' && c != 'P' && c != 'C')
		return (1);
	return (0);
}

static int	ft_is_rectangle(char **map)
{
	size_t			max_length;
	size_t			min_length;
	t_matrix_data	data;

	data = ft_matrix_data(map);
	max_length = ft_max_int(data.lenght_str);
	min_length = ft_min_int(data.lenght_str);
	if (max_length != min_length)
		return (0);
	if (max_length <= data.line_count)
		return (0);
	return (1);
}

void	check_map(t_vars *ps, char **av)
{
	ps->map = get_map(av);
	if (ft_iter_matrix_bool(ps->map, ft_isinvalid))
		map_errors(INVALID_CHAR);
	if (!ft_is_rectangle(ps->map))
		map_errors(INVALID_REC);
}
