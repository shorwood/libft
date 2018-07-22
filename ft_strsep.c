/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsep.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 15:43:19 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 16:00:20 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsep(char *sym, unsigned int w)
{
	char *str;
	char *buf;

	if (!(str = (char*)malloc((w + 2) * sizeof(char))))
		return (str);
	buf = str;
	*buf++ = *sym++;
	while (w-- > 1)
		*buf++ = *sym;
	*buf++ = *(sym + 1);
	*buf++ = '\n';
	*buf = '\0';
	return (str);
}
