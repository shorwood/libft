/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_vec3d.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/30 02:59:34 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/30 14:26:57 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_vec3d		ft_vec3d(float x, float y, float z)
{
	return ((t_vec3d){.x = x, .y = y, .z = z});
}
