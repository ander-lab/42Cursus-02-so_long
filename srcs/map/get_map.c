/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:29:11 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/10 11:09:52 by ajimenez         ###   ########.fr       */
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
		exit(1);
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
		exit(1);
	line = get_next_line(fd);
	while (line)
	{
		map[i] = ft_calloc(ft_strlen(line), sizeof(char));
		int j = 0;
		while(line[j] != '\n')
		{
			map[i][j] = line[j];
			j++;
		}
		map[i][j] = '\0';
		free(line);
		line = get_next_line(fd);
		i++;
	}
	return (map);
}
