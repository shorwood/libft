/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 22:08:58 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 12:07:36 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_memcmp(const void *blk, const void *cmp, size_t len)
{
	if (!len)
		return (0);
	if (*(unsigned char*)blk == *(unsigned char*)cmp)
		return (ft_memcmp(++blk, ++cmp, --len));
	return (*(unsigned char*)blk - *(unsigned char*)cmp);
}
