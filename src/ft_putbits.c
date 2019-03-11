/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putbits.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 22:03:32 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/11 21:33:14 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putbits(const void *ptr, size_t siz)
{
	uint8_t *buf;
	int		i;

	buf = (uint8_t*)ptr;
	while (siz--)
	{
		i = 8;
		while (i)
			ft_putchar((buf[siz] >> --i) & 1 ? '1' : '0');
	}
}
