/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_s_strncat.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 17:32:15 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 18:16:59 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_s_strncat(char *dst, char *src, unsigned int n)
{
	char	*buf;
	char	*dst_;
	char	*str;

	if (!dst)
		return (ft_s_strncat("", src, n));
	if (!src)
		return (ft_s_strncat(src, dst, n));
	dst_ = dst;
	while (*dst_++)
		;
	if (!(str = (char*)malloc(((dst_ - dst) + n + 1) * sizeof(char))))
		return (str);
	buf = str;
	while (*dst)
		*buf++ = *dst++;
	while (n--)
		*buf++ = *src++;
	*buf = '\0';
	return (str);
}
