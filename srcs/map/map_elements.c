/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_elements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:31:50 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/13 10:21:42 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#include <sys/_types/_size_t.h>

int	ft_count_positions_in_map(char **map)
{
	size_t	i;
	size_t	trigger;

	i = 0;
	trigger = 0;
	while (map[i])
	{
		trigger += count_chars('P', map[i]);
		if (trigger > 1)
			return (0);
		i++;
	}
	if (trigger != 1)
		return (0);
	return (1);
}

int	ft_count_map_chars(char **map, char c)
{
	size_t	i;
	size_t	trigger;

	i = 0;
	trigger = 0;
	while (map[i])
	{
		trigger += count_chars(c, map[i]);
		if (trigger >= 1)
			return (1);
		i++;
	}
	return (0);
}

int	check_CE0(char **map)
{
	if (!ft_count_map_chars(map, 'C'))
		return (0);
	if (!ft_count_map_chars(map, 'E'))
		return (0);
	if (!ft_count_map_chars(map, '0'))
		return (0);
	return (1);
}
