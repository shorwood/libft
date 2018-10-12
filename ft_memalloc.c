/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 07:55:49 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 08:01:30 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t siz)
{
	void *mem;

	if (!(mem = malloc(siz)))
		return (mem);
	while (siz--)
		*(uint8_t*)(mem + siz) = 0;
	return (mem);
}
