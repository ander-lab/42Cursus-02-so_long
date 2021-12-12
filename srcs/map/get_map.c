/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:29:11 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/12 17:35:44 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

static size_t ft_lines_of_map(char **av)
{
	int		fd;
	char	*line;
	size_t	i;

	i = 0;
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		map_errors(INVALID_ACCESS);
	line = get_next_line(fd);
	while (line)
	{
		line = get_next_line(fd);
		free(line);
		i++;
	}
	close(fd);
	return (i + 1);
}

static char	*strcpy_to_line(char *map, char *line)
{
	int j = 0;
	map = ft_calloc(ft_strlen(line), sizeof(char));
	while(line[j] != '\n')
	{
		map[j] = line[j];
		j++;
	}
	map[j] = '\0';
	return (map);
}

char	**get_map(char **av)
{
	int		fd;
	char	*line;
	char	**map;
	size_t	i;

	i = 0;
	map = ft_calloc(ft_lines_of_map(av), sizeof(char *));
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		map_errors(INVALID_ACCESS);
	line = get_next_line(fd);
	while (line)
	{
		map[i] = strcpy_to_line(map[i], line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	//ft_putmatrix(map, ft_matrixlen(map));
	return (map);
}
