/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:29:11 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/09 12:14:45 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//static void ft_strcpyalloc(char *dst, const char *src)
//{
//	dst = ft_calloc(ft_strlen(src), sizeof(char));
//	ft_strcpy(dst, src);
//}

char	**check_map(char **av)
{
	int		fd;
	char	*line;
	char	**map;
	size_t	i;

	i = 0;
	fd = open(av[1], O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		line = get_next_line(fd);
		free(line);
		i++;
	}
	close(fd);
	map = ft_calloc(i + 1, sizeof(char *));
	i = 0;
	fd = open(av[1], O_RDONLY);
	line = get_next_line(fd);
//	int j;
//	j = 0;
	while (line)
	{
		//j = 0;
		map[i] = ft_calloc(ft_strlen(line) + 1, sizeof(char));
	//	while (line[j])
	//	{
	//		map[i][j] = line[j];
	//		j++;
	//	}
	//		map[i][j] = '\0';
		ft_strcpy(map[i], line);
		printf("%zu-- %zu %s\n", i, ft_strlen(line), map[i]);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	return (0);
}
