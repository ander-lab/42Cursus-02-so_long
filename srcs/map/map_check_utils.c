/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 19:23:32 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/30 11:45:51 by ajimenez         ###   ########.fr       */
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
	t_matrix_data	data;

	data = ft_matrix_data(map);
	free(data.lenght_str);
	if (data.max != data.min)
		return (0);
	if (data.max < data.line_count)
		return (0);
	return (1);
}

int	check_ber(char **av)
{
	char	*aux;
	size_t	i;

	i = 0;
	aux = ft_strrchr(av[1], '.');
	if (!aux)
		return (0);
	if (aux[i] == '.' && aux[i + 1] == 'b' && aux[i + 2] == 'e'
		&& aux[i + 3] == 'r' && aux[i + 4] == '\0')
		return (1);
	return (0);
}
