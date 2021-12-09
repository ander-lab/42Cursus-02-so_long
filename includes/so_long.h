/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:54:59 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/09 13:38:18 by ajimenez         ###   ########.fr       */
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

typedef struct	s_vars {
	void	*mlx;
	void	*win;
	char	**map;
}				t_vars;


int		close_mlx(t_vars *vars);
int		key_hook(int keycode, t_vars *vars);
char	**get_map(char **av);

#endif
