/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putbits.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 22:03:32 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/21 03:08:41 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putbits(const void *ptr, size_t siz)
{
    uint8_t *buf = (uint8_t*)ptr;
	int		i;

	while (siz--)
	{
		i = 8;
		while (i)
			ft_putchar((buf[siz] >> --i) & 1 ? '1' : '0');
	}
}
