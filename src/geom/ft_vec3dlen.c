/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_vec3dlen.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/30 02:59:34 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/30 15:11:14 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <math.h>
#include "libft.h"

float		ft_vec3dlen(t_vec3d v)
{
	return (sqrtf(ft_vec3ddot(v, v)));
}
