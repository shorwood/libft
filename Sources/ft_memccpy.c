/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:51:25 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 13:14:36 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	char *buf;

	buf = dst;
	while (len--)
		if (*(uint8_t*)buf != (uint8_t)c)
			*(uint8_t*)buf++ = *(uint8_t*)src++;
		else
			return (++buf);
	return (NULL);
}
