/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_vec3dnorm.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/30 02:59:34 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/30 15:13:05 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <math.h>
#include "libft.h"

t_vec3d		ft_vec3dnorm(t_vec3d v)
{
	float len;

	len = ft_vec3dlen(v);
	return ((t_vec3d){.x = v.x / len, .y = v.y / len, .z = v.z / len});
}
