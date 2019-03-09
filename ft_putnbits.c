/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbits.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 22:03:32 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/14 17:54:43 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbits(const void *ptr, size_t siz, size_t n)
{
    uint8_t *buf = (uint8_t*)ptr;
	int		i;

	n++;
	while (siz-- && n)
	{
		i = __CHAR_BIT__;
		while (i-- && --n)
			ft_putchar((buf[siz] >> i) & 1 ? '1' : '0');
	}
}
