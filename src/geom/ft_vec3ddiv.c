/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_vec3ddiv.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/30 02:59:34 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/30 14:48:24 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_vec3d		ft_vec3ddiv(t_vec3d v, float k)
{
	return ((t_vec3d){ .x = v.x / k, .y = v.y / k, .z = v.z / k });
}
