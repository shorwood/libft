/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_meshnew.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/30 02:59:34 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/30 13:36:41 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include "libft.h"

t_mesh	*ft_meshnew(size_t n, ...)
{
	va_list	args;
	t_mesh	*new;

	new = (t_mesh*)malloc(sizeof(t_mesh));
	va_start(args, n);
	new->tris = ft_vlstnew(n, args);
	va_end(args);
	return (new);
}
