/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 09:05:38 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 23:00:53 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *str, unsigned int beg, size_t len)
{
	char *sub;
	char *buf;

	if (!str)
		return (char*)(str);
	while (beg--)
		str++;
	if (!(sub = (char*)malloc(++len * sizeof(char))))
		return (sub);
	buf = sub;
	while (--len)
		*buf++ = *(char*)str++;
	*buf = '\0';
	return (sub);
}
