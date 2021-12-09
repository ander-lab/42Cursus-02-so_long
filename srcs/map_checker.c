/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:29:11 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/09 09:47:44 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

char	**check_map(int ac, char **av)
{
	int		fd;
	char	*line;
	int		num;
	char	**map;

	fd = open(av[1], O_RDONLY);
	num = 1;
	line = get_next_line(fd);
	while (line)
	{
		printf("%i- %s", num, line);
		free(line);
		line = get_next_line(fd);
		num++;
	}
	printf("%i- %s", num, line);
	}
	close(fd);
	return (0);
}
