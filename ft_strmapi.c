/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 08:44:40 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 08:58:39 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *str, char (*fnc)(unsigned int, char))
{
	char			*map;
	char			*buf;
	size_t			len;
	unsigned int	idx;

	buf = (char*)str;
	len = 0UL;
	while (*buf++)
		len++;
	if (!(map = (char*)malloc(++len * sizeof(char))))
		return (map);
	buf = map;
	idx = 0U;
	while (*str)
		*buf++ = fnc(idx++, *str++);
	*buf = '\0';
	return (map);
}
