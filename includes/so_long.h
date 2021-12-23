/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:19:36 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/23 13:11:41 by ajimenez         ###   ########.fr       */
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
# include "structs_and_macros.h"

/*
** GAME MLX
*/

void	ft_game(t_vars *mlx);
int		close_mlx(t_vars *vars, char *msg);
int		key_hook(int keycode, t_vars *mlx);
void	ft_init_struct_mlx(t_vars *mlx, t_map *map);
void	ft_xmp_to_struct(t_vars *mlx);
void	ft_iter_map(t_vars *mlx);

/*
** Map ft's
*/

char	**get_map(char **av);
void	check_map(t_vars *ps, char **av);
void	map_errors(int c, t_vars *ps);

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
