/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:29:11 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/17 17:42:30 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	check_map(t_vars *ps, char **av)
{
	ps->map.map = get_map(av);
	ps->map.data = ft_matrix_data(ps->map.map);
	if (!get_map(av))
		map_errors(INVALID_ACCESS, ps);
	if (!check_ber(av))
		map_errors(INVALID_EXTENSION, ps);
	if (ft_iter_matrix_bool(ps->map.map, ft_isinvalid))
		map_errors(INVALID_CHAR, ps);
	if (!ft_is_rectangle(ps->map.map))
		map_errors(INVALID_REC, ps);
	if (!ft_map_is_closed(ps->map.map, ps->map.data))
		map_errors(INVALID_MAP_CLOSE, ps);
	if (!ft_count_positions_in_map(ps->map.map))
		map_errors(INVALID_POSITION, ps);
	if (!check_CE0(ps->map.map))
		map_errors(MIN_CHARS, ps);
}
