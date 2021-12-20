/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:19:06 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/20 14:15:32 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	*ft_create_image(void *img, void *mlx_ptr, char *path)
{
	int	height;
	int	width;

	img = mlx_xpm_file_to_image(mlx_ptr, path, &width, &height);
	if (!img)
	{
		printf("error img\n");
		exit (EXIT_FAILURE);
	}
	return (img);
}

void	ft_xmp_to_struct(t_vars *mlx)
{
	mlx->block = ft_create_image(mlx->block, mlx->ptr, "./sprites/grass.xpm");
	mlx->floor = ft_create_image(mlx->floor, mlx->ptr, "./sprites/floor_sprite.xpm");
	mlx->pipe = ft_create_image(mlx->pipe, mlx->ptr, "./sprites/hole.xpm");
	mlx->coin.ptr = ft_create_image(mlx->coin.ptr, mlx->ptr,
			"./sprites/can_sprite.xpm");
	mlx->mario.ptr = ft_create_image(mlx->mario.ptr, mlx->ptr,
			"./sprites/player_sprite.xpm");
}
