/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 22:08:58 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:41:15 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *ptr, const void *cmp, size_t len)
{
	while (len--)
	{
		if (*(uint8_t*)ptr != *(uint8_t*)cmp)
			return (int)(*(uint8_t*)ptr - *(uint8_t*)cmp);
		ptr++;
		cmp++;
	}
	return (0);
}
