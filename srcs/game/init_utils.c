/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:19:06 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/15 12:48:57 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_create_image(void *img, void *mlx_ptr, char *path)
{
	int	height;
	int	width;

	img = mlx_xpm_file_to_image(mlx_ptr, path, &width, &height);
	if (!img)
		printf("error img\n");
}

void	ft_xmp_to_struct(t_vars *mlx)
{
	ft_create_image(mlx->block, mlx->ptr, "path");
	ft_create_image(mlx->floor, mlx->ptr, "path");
	ft_create_image(mlx->pipe, mlx->ptr, "path");
	ft_create_image(mlx->coin.ptr, mlx->ptr, "path");
	ft_create_image(mlx->mario.ptr, mlx->ptr, "path");
}
