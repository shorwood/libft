/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 22:08:58 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 22:53:49 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_memcmp(const void *ptr, const void *cmp, size_t len)
{
	if (!len)
		return (0);
	if (*(uint8_t*)ptr == *(uint8_t*)cmp)
		return (ft_memcmp(++ptr, ++cmp, --len));
	return (*(uint8_t*)ptr - *(uint8_t*)cmp);
}
