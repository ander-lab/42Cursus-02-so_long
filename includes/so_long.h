/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:54:59 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/07 17:25:30 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
#include "../mlx/mlx.h"

typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;


int	close_mlx(t_vars *vars);
int	key_hook(int keycode, t_vars *vars);

#endif
