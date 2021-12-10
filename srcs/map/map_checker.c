/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:29:11 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/10 14:50:38 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

static int	ft_isinvalid(int c)
{
	if (c != '0' && c != '1' && c != 'E' && c != 'P' && c != 'C')
		return (1);
	return (0);
}

void	check_map(t_vars *ps, char **av)
{
	ps->map = get_map(av);
	if (ft_iter_matrix_bool(ps->map, ft_isinvalid))
		map_errors(INVALID_CHAR);
}
