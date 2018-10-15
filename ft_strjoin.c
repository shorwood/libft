/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 09:05:38 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 13:56:27 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *src, char const *dst)
{
	char	*str;
	char	*buf;
	size_t	len;

	len = 1UL;
	buf = (char*)dst;
	while (*buf++)
		len++;
	buf = (char*)src;
	while (*buf++)
		len++;
	if (!(str = (char*)malloc(++len * sizeof(char))))
		return (str);
	buf = str;
	while (*src)
		*buf++ = *(char*)src++;
	while (*dst)
		*buf++ = *(char*)dst++;
	*buf = '\0';
	return (str);
}
