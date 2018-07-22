/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsqr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 15:29:51 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 17:04:59 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsqr(char *sym, unsigned int w, unsigned int h)
{
	char			*str;
	char			*buf;
	unsigned int	i;
	unsigned int	j;

	if (!(str = (char*)malloc((w * h + h + 1) * sizeof(char))))
		return (str);
	buf = str;
	i = 0U;
	while (i < h)
	{
		j = 0U;
		while (j < w)
		{
			*buf = *(sym + 1);
			*buf = (j == w - 1) ? *(sym + 2) : *buf;
			*buf++ = (j == 0) ? *sym : *buf;
			j++;
		}
		sym += (i == 0) ? 3 : 0;
		sym += (i++ == h - 2) ? 3 : 0;
		*buf++ = '\n';
	}
	*buf = '\0';
	return (str);
}
