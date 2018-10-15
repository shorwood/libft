/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:51:25 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 22:55:46 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	char	*buf;
	size_t	ret;

	ret = 0UL;
	buf = (char*)src;
	while (*buf++)
		ret++;
	buf = (char*)src;
	while (*dst && len)
	{
		dst++;
		len--;
		ret++;
	}
	if (!len)
		return (ret);
	while (*buf)
		if (len > 1 && len--)
			*dst++ = *buf++;
		else
			buf++;
	*dst = '\0';
	return (ret);
}
