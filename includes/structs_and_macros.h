/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs_and_macros.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:29:47 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/20 11:29:49 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_AND_MACROS_H
# define STRUCTS_AND_MACROS_H

# include "libft/libft.h"

/* ************************************************************************** */
/*                                    MAP                                     */
/* ************************************************************************** */

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
** MAP ERROR MACROS
*/
# define UP_Y		-1
# define UP_X		0

# define RIGHT_Y	0
# define RIGHT_X	1

# define DOWN_X		0
# define DOWN_Y		1

# define LEFT_Y		0
# define LEFT_X		-1

/*
** 	STRUCT'S
*/
typedef struct s_map {
	char			**map;
	t_matrix_data	data;
}				t_map;

typedef struct s_mario {
	void	*ptr;
	int		x;
	int		y;
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
	t_map	map;
	t_mario	mario;
	t_coin	coin;
}				t_vars;

#endif
