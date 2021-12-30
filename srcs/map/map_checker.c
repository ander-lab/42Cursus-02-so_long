/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:29:11 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/30 11:58:57 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	check_map(t_vars *ps, char **av)
{
	if (!check_ber(av))
		map_errors(INVALID_EXTENSION, ps);
	ps->map.map = get_map(av);
	ps->map.data = ft_matrix_data(ps->map.map);
	if (!ps->map.map)
		map_errors(INVALID_ACCESS, ps);
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
