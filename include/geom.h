/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   geom.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/29 19:59:40 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/30 15:24:52 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _LIBFT_GEOM_H
# define _LIBFT_GEOM_H
# include <stdlib.h>
# include "list.h"

typedef struct  s_vec3d
{
    float		x;
    float		y;
    float		z;
}				t_vec3d;

typedef struct	s_tri
{
    t_vec3d		v[3];
}				t_tri;

typedef struct	s_mesh
{
    t_lst		tris;
}               t_mesh;

t_mesh			*ft_meshnew(size_t n, ...);
t_tri			*ft_trinew(t_vec3d v0, t_vec3d v1, t_vec3d v2);
t_vec3d			ft_vec3d(float x, float y, float z);
t_vec3d			ft_vec3dadd(t_vec3d v0, t_vec3d v1);
t_vec3d			ft_vec3dsub(t_vec3d v0, t_vec3d v1);
t_vec3d			ft_vec3dmul(t_vec3d v, float x);
t_vec3d			ft_vec3ddiv(t_vec3d v, float x);

float			ft_vec3ddot(t_vec3d v0, t_vec3d v1);
float			ft_vec3dlen(t_vec3d v);
#endif

