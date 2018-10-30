/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 09:05:38 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/30 01:21:52 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*buf;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = 1UL;
	buf = (char*)s1;
	while (*buf++)
		len++;
	buf = (char*)s2;
	while (*buf++)
		len++;
	if (!(str = (char*)malloc(++len * sizeof(char))))
		return (NULL);
	buf = str;
	while (*s1)
		*buf++ = *(char*)s1++;
	while (*s2)
		*buf++ = *(char*)s2++;
	*buf = '\0';
	return (str);
}
