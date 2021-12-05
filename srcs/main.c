/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:45:26 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/04 18:02:20 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mlx/mlx.h"
#include <stdio.h>

int	deal_key(int key)
{
	printf("X");
	return (0);
}

int main (void)
{
	void	*mp = mlx_init();
	void	*window = mlx_new_window(mp, 200, 200, "=)");
	void	*image_pointer = mlx_new_image(mp, 70, 70);
	mlx_pixel_put(mp, window, 250, 250, 0xff00f4);
	mlx_key_hook(window, deal_key, (void *)0);
	//mlx_loop(window);
	mlx_loop(image_pointer);
}
