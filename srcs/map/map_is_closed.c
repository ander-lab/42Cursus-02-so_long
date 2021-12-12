/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_is_closed.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:15:57 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/12 21:16:50 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

static int	ft_isnotone(int c)
{
	if (c != '1')
		return (1);
	return (0);
}

static int	ft_borders_are_one(char	**map, size_t len)
{
	size_t	i;

	i = 0;
	while (map[i])
	{
		if ((map[i][0] != '1') || (map[i][len - 1] != '1'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_map_is_closed(char **map, t_matrix_data map_data)
{
	if (ft_iter_str_bool(map[0], ft_isnotone)
		|| ft_iter_str_bool(map[map_data.line_count - 1], ft_isnotone))
		return (0);
	if (!ft_borders_are_one(map, map_data.lenght_str[0]))
		return (0);
	return (1);
}
