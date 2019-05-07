/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_trinew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/30 02:59:34 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/30 13:37:15 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_tri	*ft_trinew(t_vec3d v0, t_vec3d v1, t_vec3d v2)
{
	t_tri	*new;

	if (!(new = (t_tri*)malloc(sizeof(t_tri))))
		return (NULL);
	new->v[0] = v0;
	new->v[1] = v1;
	new->v[2] = v2;
	return (new);
}
