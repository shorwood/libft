/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsqr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 15:29:51 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 17:15:57 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsqr(char *s, unsigned int w, unsigned int h)
{
	char			*str;
	char			*buf;
	unsigned int	i;
	unsigned int	j;

	if (!((str = (char*)malloc((w * h + h + 1) * sizeof(char))) && s && w * h))
		return (str);
	buf = str;
	i = 0U;
	while (i < h)
	{
		j = 0U;
		while (j < w)
		{
			*buf = *(s + 1);
			*buf = (j == w - 1) ? *(s + 2) : *buf;
			*buf++ = (j == 0) ? *s : *buf;
			j++;
		}
		s += (i == 0) ? 3 : 0;
		s += (i++ == h - 2) ? 3 : 0;
		*buf++ = '\n';
	}
	*buf = '\0';
	return (str);
}
