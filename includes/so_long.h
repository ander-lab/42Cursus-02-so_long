/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:19:36 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/15 18:18:17 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "mlx/mlx.h"
# include "libft/libft.h"

/*
** MAP ERROR MACROS
*/

# define INVALID_CHAR 		0
# define INVALID_REC 		1
# define INVALID_ACCESS 	2
# define INVALID_MAP_CLOSE 	3
# define INVALID_POSITION 	4
# define MIN_CHARS 			5
# define INVALID_EXTENSION  6
# define INVALID_ARGV       7

/*
** 	STRUCT'S
*/
typedef struct s_mario {
	void	*ptr;
	size_t	x;
	size_t	y;
}	t_mario;

typedef struct s_coin{
	void	*ptr;
	size_t	count;
}	t_coin;

typedef struct s_vars {
	void	*ptr;
	void	*win;
	void	*block;
	void	*floor;
	void	*pipe;
	t_mario	mario;
	t_coin	coin;
}				t_vars;

typedef struct s_map {
	char			**map;
	t_matrix_data	data;
}				t_map;

/*
** GAME MLX
*/

void	ft_game(t_map *map, t_vars *mlx);
int		close_mlx(t_vars *vars);
int		key_hook(int keycode, t_vars *vars);
void	ft_init_struct_mlx(t_vars *mlx, t_map *map);
void	ft_xmp_to_struct(t_vars *mlx);
void	ft_iter_map(t_map *map, t_vars *mlx);

/*
** Map ft's
*/

char	**get_map(char **av);
void	check_map(t_map *ps, char **av);
void	map_errors(int c, t_map *ps);

/*
** Check map utils
*/

int		ft_isinvalid(int c);
int		ft_is_rectangle(char **map);
int		ft_map_is_closed(char **map, t_matrix_data map_data);
int		ft_count_positions_in_map(char **map);
int		check_CE0(char **map);
int		check_ber(char **av);

#endif
