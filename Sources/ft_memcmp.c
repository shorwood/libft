/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 22:08:58 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 12:08:52 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_memcmp(const void *mem, const void *cmp, size_t len)
{
	if (!len)
		return (0);
	if (*(unsigned char*)mem == *(unsigned char*)cmp)
		return (ft_memcmp(++mem, ++cmp, --len));
	return (*(unsigned char*)mem - *(unsigned char*)cmp);
}
