/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_s_strcat.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 17:32:15 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 18:17:52 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_s_strcat(char *dst, char *src)
{
	char	*buf;
	char	*dst_;
	char	*src_;
	char	*str;

	if (!dst)
		return (src);
	if (!src)
		return (dst);
	dst_ = dst;
	src_ = src;
	while (*dst_++)
		;
	while (*src_++)
		;
	if (!(str = (char*)malloc(((dst_ - dst) + (src_ - src) + 1) * sizeof(char))))
		return (str);
	buf = str;
	while (*dst)
		*buf++ = *dst++;
	while (*src)
		*buf++ = *src++;
	*buf = '\0';
	return (str);
}
