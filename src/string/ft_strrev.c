/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:53:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 00:32:52 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrev(char *str)
{
	size_t	off;
	char	*buf;
	char	c;

	buf = str;
	while (*++buf)
		;
	off = 0;
	buf--;
	while (str < buf)
	{
		c = *str;
		*str++ = *buf;
		*buf-- = c;
		off++;
	}
	return (str - off);
}
