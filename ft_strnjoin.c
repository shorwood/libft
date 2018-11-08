/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnjoin.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 09:05:38 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/08 19:48:14 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, size_t len)
{
	char	*str;
	char	*buf;

	if (!s1)
		return (ft_strndup(s2, len));
	if (!s2)
		return (ft_strdup(s1));
	buf = (char*)s1;
	while (*buf++)
		len++;
	if (!(str = (char*)malloc(++len * sizeof(char))))
		return (str);
	buf = str;
	while (*s1 && --len)
		*buf++ = *(char*)s1++;
	while (*s2 && --len)
		*buf++ = *(char*)s2++;
	*buf = '\0';
	return (str);
}
