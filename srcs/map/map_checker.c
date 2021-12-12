/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:29:11 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/12 21:07:57 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	check_map(t_vars *ps, char **av)
{
	ps->map = get_map(av);
	ps->map_data = ft_matrix_data(ps->map);
	if (ft_iter_matrix_bool(ps->map, ft_isinvalid))
		map_errors(INVALID_CHAR);
	if (!ft_is_rectangle(ps->map))
		map_errors(INVALID_REC);
	if (!ft_map_is_closed(ps->map, ps->map_data))
		map_errors(INVALID_MAP_CLOSE);
	if (!ft_count_positions_in_map(ps->map))
		map_errors(INVALID_POSITION);
	if (!check_CE0(ps->map))
		map_errors(MIN_CHARS);
}
//TODO --> 
