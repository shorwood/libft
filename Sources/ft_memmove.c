/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:51:25 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 13:18:13 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *buf;

	buf = dst;
	if (dst > src)
		while (len--)
			*(uint8_t*)(buf + len) = *(uint8_t*)(src + len);
	else
		while (len--)
			*(uint8_t*)buf++ = *(uint8_t*)src++;
	return (dst);
}
