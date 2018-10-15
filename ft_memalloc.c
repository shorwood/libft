/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 07:55:49 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 13:55:00 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t siz)
{
	void	*ptr;
	uint8_t	*buf;

	if (!(ptr = malloc(siz)))
		return (ptr);
	buf = (uint8_t*)ptr;
	while (siz--)
		*buf++ = 0x00;
	return (ptr);
}
