/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 19:23:32 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/12 20:17:09 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	ft_isinvalid(int c)
{
	if (c != '0' && c != '1' && c != 'E' && c != 'P' && c != 'C')
		return (1);
	return (0);
}

int	ft_is_rectangle(char **map)
{
	size_t			max_length;
	size_t			min_length;
	t_matrix_data	data;

	data = ft_matrix_data(map);
	max_length = ft_max_int(data.lenght_str);
	min_length = ft_min_int(data.lenght_str);
	if (max_length != min_length)
		return (0);
	if (max_length < data.line_count)
		return (0);
	return (1);
}
