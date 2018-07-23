/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_2d_collision.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/24 00:59:01 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/24 01:43:37 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

char	ft_2d_collision(t_2d *vtx, t_2d a, t_2d b)
{
	while (vtx)
		if (vtx->x > a.x
			&& vtx->x < b.x
			&& vtx->y > a.y
			&& vtx->y < b.y)
			return (1);
		else
			vtx++;
	return (0);
}
