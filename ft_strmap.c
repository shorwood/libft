/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 08:44:40 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 08:58:42 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *str, char (*fnc)(char))
{
	char	*map;
	char	*buf;
	size_t	len;

	buf = (char*)str;
	len = 0UL;
	while (*buf++)
		len++;
	if (!(map = (char*)malloc(++len * sizeof(char))))
		return (map);
	buf = map;
	while (*str)
		*buf++ = fnc(*str++);
	*buf = '\0';
	return (map);
}
