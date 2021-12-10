/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_errors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:11:34 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/10 11:19:08 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	map_errors(int c)
{
	if (c == 0)
		printf("Invalid char in the map\n");
	else if (c == 1)
		printf("The map isn't a rectangle\n");
}
