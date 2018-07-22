/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:53:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 04:57:35 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrev(char *str)
{
	char	*buf0;
	char	*buf1;
	char	c;

	if (!str)
		return (str);
	buf0 = str;
	buf1 = str;
	while (*buf0++)
		;
	buf0 -= 2;
	while (buf0 > buf1)
	{
		c = *buf1;
		*buf1++ = *buf0;
		*buf0-- = c;
	}
	return (str);
}
