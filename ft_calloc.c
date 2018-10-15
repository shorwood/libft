/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 13:12:52 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 17:25:24 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t cnt, size_t siz)
{
	void	*ptr;
	uint8_t	*buf;

	siz *= cnt;
	if (!(ptr = malloc(siz)))
		return (ptr);
	buf = (uint8_t*)ptr;
	while (siz--)
		*buf++ = 0x00;
	return (ptr);
}
