/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:29:11 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/23 14:33:16 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

static size_t	ft_lines_of_map(char **av)
{
	int		fd;
	char	*line;
	size_t	i;

	i = 0;
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (0);
	line = get_next_line(fd);
	while (line)
	{
		free(line);
		line = get_next_line(fd);
		i++;
	}
	free(line);
	close(fd);
	return (i + 1);
}

static char	*strcpy_to_line(char *map, char *line)
{
	int	j;

	j = 0;
	map = ft_calloc(ft_strlen(line), sizeof(char));
	if (!map)
		return (0);
	while (line[j] != '\n')
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
		return (0);
	line = get_next_line(fd);
	while (line)
	{
		if (ft_strchr(line, '\n'))
			map[i] = strcpy_to_line(map[i], line);
		else
			map[i] = ft_strdup(line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	return (map);
}
