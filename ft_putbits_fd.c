/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putbits_fd.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 22:03:32 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/08 10:06:50 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putbits_fd(const void *ptr, size_t siz, int fd)
{
    uint8_t *buf = (uint8_t*)ptr;
	int		i;

	while (siz--)
	{
		i = 8;
		while (i)
			ft_putchar_fd((buf[siz] >> --i) & 1 ? '1' : '0', fd);
	}
}
